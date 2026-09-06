int pirPin = 2;       
int ledPin = 13;      

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  
  Serial.println("Warming up sensor... Please wait 30 seconds.");
  delay(30000); 
  Serial.println("Sensor is Ready!");
}

void loop() {
  int sensorValue = digitalRead(pirPin);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH); 
    Serial.println("Motion Detected! (Signal: HIGH)");
  } else {
    digitalWrite(ledPin, LOW);  
    Serial.println("No Motion (Signal: LOW)");
  }
  
  delay(500);
}