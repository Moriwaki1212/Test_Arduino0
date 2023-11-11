
int pinNum=2,wait_time=1000;
void setup() {
    pinMode(pinNum, OUTPUT);
}

void loop() {
    digitalWrite(pinNum, HIGH);
    delay(wait_time);
    digitalWrite(pinNum,LOW);
    delay(wait_time);
}