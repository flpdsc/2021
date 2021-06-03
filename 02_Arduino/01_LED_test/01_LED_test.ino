int pinLed0 = 12;
int pinLed1 = 11;

void setup() {  //초기화 작업
  // put your setup code here, to run once:
  pinMode(pinLed0, OUTPUT);  //13번 핀을 출력으로 설정
  pinMode(pinLed1, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed0, HIGH);
  digitalWrite(pinLed1, LOW);
  delay(1000);
  digitalWrite(pinLed0, LOW);
  digitalWrite(pinLed1, HIGH);
  delay(1000);
  
}
