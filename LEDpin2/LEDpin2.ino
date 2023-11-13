int led = 5;
int duty =50;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);
    delay(1000);
    analogWrite(led,duty);
    delay(1000);
}