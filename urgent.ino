int rate = 500;
int timer = millis();
int timer2 = timer;
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rate = (10*sq(millis()));
  Serial.println(rate);
  timer2 = millis();
  
  if (timer2 - timer > rate){
    digitalWrite(5, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  
  
  if (timer2 - timer > 2 * rate){
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
    timer = millis();
    timer2 = timer;
  }
