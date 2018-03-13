int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int rate = 100;
int count = millis();
int count2 = count;

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
  //start counter
  count2 = millis();
  // turn the ledPin 5 on at 1/4 turn
  if (sensorValue > 1023 * 1 / 4) {
    digitalWrite(5, HIGH);
  }
  if (sensorValue < 1023 * 1 / 4) {
    digitalWrite(5, LOW);
  }
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
    if (count2 - count > rate){
    digitalWrite(9, HIGH);
  }
  if (count2 - count > 2 * rate) {
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    count = millis();
    count2 = count;
    Serial.println(count);
  }
  if (sensorValue < 1023 * 3 / 4) {
    digitalWrite(9, LOW);
  }
}
}
