int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(5, OUTPUT);//white
  pinMode(6, OUTPUT);//green
  pinMode(9, OUTPUT);//red
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // display the value from the sensor
  Serial.println(sensorValue);
  // turn the ledPin 5 on at 1/4 turn
  if (sensorValue > 1023 * 1 / 4) {
    digitalWrite(5, HIGH);
  }
  if (sensorValue < 1023 * 1 / 4) {
    digitalWrite(5, LOW);
  }
  //turn the ledPin 6 on at 1/2 turn
  if (sensorValue > 1023 * 1 / 2) {
    digitalWrite(6, HIGH);
  }
  if (sensorValue < 1023 * 1 / 2) {
    digitalWrite(6, LOW);
  }
  //turn the ledPin 9 on at 3/4 turn

  if (sensorValue > 1023 * 3 / 4) {
    digitalWrite(9, HIGH);
  }
  if (sensorValue < 1023 * 3 / 4) {
    digitalWrite(9, LOW);
  }
}
