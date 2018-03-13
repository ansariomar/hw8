int led = 5;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 100;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(5, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 5:
  analogWrite(5, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 100 milliseconds to see the dimming effect
  delay(100);
}
