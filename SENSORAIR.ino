#include <Servo.h>
Servo myServo;
const int sensorPin = 2;
const int servoPin = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  myServo.attach(servoPin);
  myServo.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(sensorPin);
  if(sensorValue == LOW){
    Serial.println("Tidak ada air");
    myServo.write(0);    
  }else{
    Serial.println("Air Terdeteksi");
    myServo.write(90);
    delay(1000);
  }
  delay(500);
}
