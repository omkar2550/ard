#include <NewPing.h>



const int TriggerPin = 6;
const int EchoPin = 7;

// 100 = maxDistance
NewPing sonar (TriggerPin, EchoPin, 30);


void setup() {
  Serial.begin(9600);
  
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int cm = sonar.ping_cm();
  Serial.println(cm);
  
  //delay(1000);



  delay(50);
  if (cm < 25) {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }//else {
   // digitalWrite(8, LOW);
    //digitalWrite(9, LOW);
  //}
  if (cm > 25) {
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  if (cm < 20) {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }//else {
    //digitalWrite(8, LOW);
    //digitalWrite(9, LOW);
  //}
  if (cm < 15) {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  if (cm < 10) {
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  if (cm == 0) {
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  
  }
  
}
