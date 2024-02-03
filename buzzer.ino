// 音センサ（アナログ生値表示）
 
// ポート指定用変数設定
int a0_in_port = A0;    // センサ デジタル情報入力
 
// 受信データ用変数設定
int a0_data;    // analogデータ用
int pin = 13;     // ブザーを接続したピン番号
int melo = 200;   // 音の長さを指定
double sound_threshold = 55;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);

  // シリアルモニタ通信速度設定
  Serial.begin(9600);  
}
 
void loop() {
  // put your main code here, to run repeatedly:
  // 音センサからの情報取得
  a0_data = analogRead(a0_in_port);   // アナログデータ
  if (a0_data>=sound_threshold){
    Serial.println("over55");
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
  delay(10);
}