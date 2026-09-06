
const int TOUCH_PIN = 2;   
const int LED_PIN = 13;    

void setup() {
  pinMode(TOUCH_PIN, INPUT);   
  pinMode(LED_PIN, OUTPUT);    
  
  Serial.begin(9600);         
  Serial.println("Touch Sensor Test Ready!");
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN); 

  if (touchState == HIGH) {
    digitalWrite(LED_PIN, HIGH);     
    Serial.println("Touched! -> LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);      
    Serial.println("Not Touched -> LED OFF");
  }

  delay(200); 
}