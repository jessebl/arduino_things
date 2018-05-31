// Define pins
int blue_led = 9;
int green_led = 11;
int red_led = 12;
int blue_button = 3;
int green_button = 5;
int red_button = 6;
bool blue_on = true;
bool green_on = true;
bool red_on = true;

void eval_buttons()
{
  // Blue eval
  if(digitalRead(blue_button) == LOW)
  { digitalWrite(blue_led, LOW); }
  else
  { digitalWrite(blue_led, HIGH); }
  // Green eval
  if(digitalRead(green_button) == LOW)
  { digitalWrite(green_led, LOW); }
  else
  { digitalWrite(green_led, HIGH); }
  // Red eval
  if(digitalRead(red_button) == LOW)
  { digitalWrite(red_led, LOW); }
  else
  { digitalWrite(red_led, HIGH); }
}

void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(blue_button, INPUT_PULLUP);
  pinMode(green_button, INPUT_PULLUP);
  pinMode(red_button, INPUT_PULLUP);
  eval_buttons();
}

void loop()
{
  eval_buttons();
}
