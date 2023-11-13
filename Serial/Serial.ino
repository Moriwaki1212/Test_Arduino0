
int led = 13;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);  //  初期化
}

void loop() {
   if(Serial.available()<=0){ //何も受信していないなら何もしない
    return;
  } 
  byte var;
  var = Serial.read();

  switch(var){
    case '0':
      digitalWrite(led, LOW);
      break;
    case '1':
      digitalWrite(led, HIGH);
      break;
    default:
      break;
  }
}