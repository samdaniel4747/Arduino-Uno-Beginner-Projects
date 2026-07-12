
  const int RED  = 7;
  const int YELLOW = 9;
  const int GREEN = 10;

void setup() {

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
 
  digitalWrite(RED , HIGH);
  delay(5000);
  digitalWrite(RED , LOW);


  digitalWrite(YELLOW , HIGH);
  delay(3000);
  digitalWrite(YELLOW , LOW);

  digitalWrite(GREEN, HIGH);
  delay(2000);
  digitalWrite(GREEN , LOW);
  delay(2000);
}
