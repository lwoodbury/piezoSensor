/*
Simple piezo based impact sensor 
Luke Woodbury 13th Feb 2026
*/


const int analogInPin = A0; 
const int LEDpin = 13; 

int sensorValue = 0;

void setup() {
  // initialize serial communications at 9600 bps
  // comment out all the serial stuff for speed once you are set
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin);

  if (sensorValue>500) {  
    digitalWrite(LEDpin, HIGH);
  }else {
    digitalWrite(LEDpin, LOW);
  }
  
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
