//Lesson 08 傾いたらLEDを消灯させて知らせるスケッチ
//https://omoroya.com/

int tiltPin = 2;//チルトスイッチ
int ledPin = 3;//LED

void setup() //初期設定
{ 
  pinMode(tiltPin,INPUT_PULLUP); //2番ピンをプルアップありのインプットに指定
  pinMode(ledPin,OUTPUT);        //３番ピンをアウトプットに指定
} 

void loop()  //ループ関数
{  
  int digitalVal = digitalRead(tiltPin);
  if(HIGH == digitalVal)       //２番ピンがHighならAを実行
  {
    digitalWrite(ledPin,LOW);  //A ２番ピンがHighなら傾い導通していないためプルアップ。LED消灯させる。
  }
  else                         //２番ピンがHighでない場合Bを実行
  {
    digitalWrite(ledPin,HIGH); //B Highでなければ傾いていないのでGNDに接続される。LED点灯させる。
  }
}