/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

const int LED_PIN = 11; //LED_BUILTIN;

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_PIN, HIGH);
  // wait for a second
  delay(200);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_PIN, LOW);
   // wait for a second
  delay(200);
}