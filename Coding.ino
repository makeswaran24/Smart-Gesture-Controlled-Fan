# Smart-Gesture-Controlled-Fan

int trigPin = 9;     
int echoPin = 10;    
int fanPin  = 3;     

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 2 && distance <= 10) {
    analogWrite(fanPin, 85);   
    Serial.println("Fan: LOW SPEED");
  } 
  else if (distance > 10 && distance <= 20) {
    analogWrite(fanPin, 170);  
    Serial.println("Fan: MEDIUM SPEED");
  } 
  else if (distance > 20 && distance <= 30) {
    analogWrite(fanPin, 255);  
    Serial.println("Fan: HIGH SPEED");
  } 
  else {
    analogWrite(fanPin, 0);    
    Serial.println("Fan: OFF");
  }

  delay(200);
}
```

Do you also want me to make a **circuit diagram (schematic)** for this project so it looks neat for your resume or report?
