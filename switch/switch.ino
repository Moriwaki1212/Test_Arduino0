// 音センサ（アナログ生値表示）
 
// ポート指定用変数設定
int a0_in_port = A0;    // センサ デジタル情報入力
int d12_out_port = 12;  // LED点灯用出力
int d8_in_port = 8;     // センサ アナログ情報入力
int pin = 13;     // ブザーを接続したピン番号

// 受信データ用変数設定
int a0_data;    // analogデータ用
int d8_data;    // digitalデータ用

int melo = 200;   // 音の長さを指定
double sound_threshold = 555;  //音の閾値を設定
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);

  // シリアルモニタ通信速度設定
  Serial.begin(9600);  
  pinMode(d8_in_port, INPUT);     // センサ情報入力設定
  pinMode(d12_out_port, OUTPUT);  // LED用出力設定
}
 
void loop() {
  // put your main code here, to run repeatedly:
  // 音センサからの情報取得
  a0_data = analogRead(a0_in_port);   // アナログデータ
  d8_data = digitalRead(d8_in_port);  // デジタルデータ
 
  // 受信デジタル情報によりLED動作決定
  if(d8_data == HIGH){
    Serial.println("Digital High");
    Serial.println( a0_data );
    digitalWrite(d12_out_port, HIGH);     // LED点灯

    delay( 100 );    // 500m秒待機
  } else {
    digitalWrite(d12_out_port, LOW);      // LED消灯
  }

  if (a0_data>=sound_threshold){
    Serial.println("over55");
    Serial.println( a0_data );
    digitalWrite(pin,HIGH);
    delay(1000);
    
    //tone(pin,262,melo) ;  // ド
    //delay(melo) ;         // 音がなっている間待機

    digitalWrite(pin,LOW);
    //delay(1000);
  }
  // シリアルモニタへ出力
  Serial.println( a0_data ); 
  
  // 1m秒待機
  delay(1);
}