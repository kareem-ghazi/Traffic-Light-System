/* 
Traffic Light System - A simple traffic light 
system built using an Arduino board and three LEDs.
*/

int RED_LED = 4;
int YELLOW_LED = 7;
int GREEN_LED = 8;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop()
{
  // Turn on the red led.
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  
  // Flash the yellow led three times.
  digitalWrite(YELLOW_LED, HIGH);
  delay(500);
  
  digitalWrite(YELLOW_LED, LOW);
  delay(500);
  
  digitalWrite(YELLOW_LED, HIGH);
  delay(500);
  
  digitalWrite(YELLOW_LED, LOW);
  delay(500);
  
  digitalWrite(YELLOW_LED, HIGH);
  delay(500);
  
  digitalWrite(YELLOW_LED, LOW);
  delay(500);
  
  // Turn off the red & yellow led and turn on the green led.
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
  
  // Turn off all the green led.
  digitalWrite(GREEN_LED, LOW);
  delay(1500);
}