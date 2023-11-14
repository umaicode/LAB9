#include <Servo.h>

Servo myServo;
int servoPin = 11;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin)  // 서브 모터 연결
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0); // 가변저항 값 읽기
  // 가변저항 값을 각도 값으로 변환
  int angle = map(value, 0, 1023, 0, 180);
  myServo.write(angle);
}
