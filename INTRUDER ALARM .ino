const int pir = 2;
const int led = 7;
const int buzzer = 8;

void setup() {

  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  if(digitalRead(pir)==HIGH){

    Serial.println("Motion Detected!");

    digitalWrite(led,HIGH);

    tone(buzzer,1200);

  }

  else{

    digitalWrite(led,LOW);

    noTone(buzzer);

  }

}
