int pinGnd = A2, pinVcc = A1, pinCds = A0;
int pinLed = 3;
int bright_val = 0;
 
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  pinMode(pinLed, OUTPUT);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinCds, INPUT);

  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
  
}
// 평상시 : 481 ~ 482, 가렸을 때 780
float unit = (780.0 - 480.0)/5;
void loop() {
  // put your main code here, to run repeatedly:

  int adcData = analogRead(pinCds);
  float adcVolt = adcData * (5/1024.0) * 1000.0;

  //LED 제어
  bright_val = map(adcData, 80, 800, 0, 255); // (변환할 수, 현재값의 하한, 현재값의 상한, 목표값의 상한)
  analogWrite(pinLed, bright_val);
  
//  if (adcData < 480){
//    analogWrite(pinLed, 0);
//  } else if(adcData < (480 + unit)){
//    analogWrite(pinLed, 50);
//  } else if(adcData < (480 + unit*2)){
//    analogWrite(pinLed, 100);
//  } else if(adcData < (480 + unit*3)){
//    analogWrite(pinLed, 150);
//  } else if(adcData < (480 + unit*4)){
//    analogWrite(pinLed, 200);
//  } else if(adcData < (480 + unit*5)){
//    analogWrite(pinLed, 250);
//  } else {
//    analogWrite(pinLed, 255); 
//  }
  

  Serial.print("CDS : ");
  Serial.print(adcData);
  Serial.print(", Volt : ");
  Serial.print(adcVolt);
  Serial.println("mV");
  // sprintf 함수를 이용해서 한줄로 출력
  delay(500);
  
}
