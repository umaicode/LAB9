void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Enable1, HIGH); // 모터 제어 가능 상태
  digitalWrite(DIR1, HIGH); // 정방향 회전
  for (int i = 255; i >= 0; i--) { // 모터 회전 속도 서서히 증가
    analogWrite(PWM1, i);
    delay(30);
  }
  digitalWrite(PWM1, HIGH); // 모터 정지

  delay(200);
  
  digitalWrite(DIR1, LOW); // 역방향 회전
  for (int i = 0; i < 256; i++) { // 모터 회전 속도 서서히 증가
    analogWrite(PWM1, i);
    delay(30);
  }
  digitalWrite(PWM1, LOW); // 모터 정지

  delay(200);

  digitalWrite(Enable1, LOW); // 모터 제어 불가능 상태
}
