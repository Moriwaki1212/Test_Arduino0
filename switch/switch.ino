
int led = 5;
int duty = 255; 


void setup() {
    delay(10000);
    pinMode(3, INPUT);              //3ピンを入力ピンにする
    pinMode(led, OUTPUT);             //7ピンを出力ピンにする

}

void loop() {
    if(digitalRead(3)== HIGH){      //もし3ピンがHIGHなら
      analogWrite(led,duty);
      delay(5000);            //7ピンをHIGHにする
    }
    else {                          //もし3ピンがLOWなら
      analogWrite(led,0);            //7ピンをLOWにする
    }

}