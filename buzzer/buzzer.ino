//www.elegoo.com
//2016.12.08

int buzzer = 7;//the pin of the active buzzer
int button = 2;
bool button_on = false;

void setup()
{
  pinMode(buzzer, OUTPUT);//initialize the buzzer pin as an output
  pinMode(button, INPUT_PULLUP);
}

void button_eval() {
  if (digitalRead(button) == LOW) {
    button_on = true;
  }
  else {
    button_on = false;
  }
}

void loop() {
  button_eval();
  if (button_on) {
    digitalWrite(buzzer,HIGH);
  }
  else {
    digitalWrite(buzzer,LOW);
  }
}
