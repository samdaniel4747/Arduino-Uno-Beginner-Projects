const int led = 12;
const int pot = 10;

void setup() {
    pinMode(led, OUTPUT);

}

void loop() {
    int sensorvalue = analogRead(pot);
    int brightness =  map(sensorvalue, 0, 1023, 0, 255);
    analogWrite(led, brightness);
    delay(100);

}
