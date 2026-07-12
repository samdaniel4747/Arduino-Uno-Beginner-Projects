const int button = 7;
const int RED = 13;

int buttonstate = 0; 
void setup() {
  pinMode(RED , OUTPUT);
  pinMode(button, INPUT_PULLUP);

}

void loop() {
  
  buttonstate = digitalRead(button);
  if (buttonstate == LOW){
    digitalWrite(RED, HIGH);
  } 
  else{
    digitalWrite(RED, LOW);
  }
}
