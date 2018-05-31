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

void eval_bools()
{
  // Blue eval
  if(digitalRead(blue_button) == LOW)
  { blue_on = !blue_on; }
  // Green eval
  if(digitalRead(green_button) == LOW)
  { green_on = !green_on; }
  // Red eval
  if(digitalRead(red_button) == LOW)
  { red_on = !red_on; }
}

void eval_buttons()
{
  eval_bools();
  // Blue eval
  if(blue_on)
  { digitalWrite(blue_led, HIGH); }
  else
  { digitalWrite(blue_led, LOW); }
  // Green eval
  if(green_on)
  { digitalWrite(green_led, HIGH); }
  else
  { digitalWrite(green_led, LOW); }
  // Red eval
  if(red_on)
  { digitalWrite(red_led, HIGH); }
  else
  { digitalWrite(red_led, LOW); }
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
  delay(125);
}
