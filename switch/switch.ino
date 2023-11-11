void setup() {
    delay(10000);
    pinMode(3, INPUT);              //3ピンを入力ピンにする
    pinMode(7, OUTPUT);             //7ピンを出力ピンにする

}

void loop() {
    if(digitalRead(3)== HIGH){      //もし3ピンがHIGHなら
      digitalWrite(7,1);
      delay(5000);            //7ピンをHIGHにする
    }
    else {                          //もし3ピンがLOWなら
      digitalWrite(7,0);            //7ピンをLOWにする
    }

}