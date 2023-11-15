int photoresiter = A5;
int bright;
int led = 7;

void setup(){
    pinMode(photoresiter,INPUT);
    Serial.begin(9600);
}

void loop(){
    bright =analogRead(photoresiter);
    Serial.println(bright);
    if(bright>667){
      digitalWrite(led,HIGH);
    }else{
      digitalWrite(led,LOW);
    }
}
