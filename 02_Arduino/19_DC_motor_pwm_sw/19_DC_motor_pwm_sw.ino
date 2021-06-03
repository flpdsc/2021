// 스위치 3개를 이용해서 모터의 속도를 조절하세요
// SW0 : 모터의 듀티비를 25씩 증가, 인터럽트 사용 (8번)
// SW1 : 모터의 듀티비를 25씩 감소, 인터럽트 사용 (9번)
// SW2 : 모터를 정지, 인터럽트 사용 (10번)

#include <YetAnotherPcInt.h>

int vcc = 2;

int duty_rate = 0;

int pinSw[3] = {8, 9, 10};

int pinPos = 5, pinNeg = 4, pinEn = 3;

void setup() {
  // put your setup code here, to run once:

  //Switch VCC 설정
  pinMode(vcc, OUTPUT);
  digitalWrite(vcc, HIGH);

  //시리얼 설정
  Serial.begin(115200);

  //SW핀 설정
  for (int i=0; i<3; i++)
    pinMode(pinSw[i], INPUT);

  PcInt::attachInterrupt(pinSw[0], SW0_ft, RISING);
  PcInt::attachInterrupt(pinSw[1], SW1_ft, RISING);
  PcInt::attachInterrupt(pinSw[2], SW2_ft, RISING);
    
  //모터핀 설정
  pinMode(pinPos, OUTPUT);
  pinMode(pinNeg, OUTPUT);
  pinMode(pinEn, OUTPUT);   
}

void loop() {
  // put your main code here, to run repeatedly:
  motor_ctrl(1);
//  motor_ctrl(2);
//  motor_ctrl(3);
//  motor_ctrl(4);                                           
}

void motor_ctrl(int mode){
  analogWrite(pinEn, duty_rate); 
      
  if (mode == 1){ //CW
    digitalWrite(pinPos, LOW);
    digitalWrite(pinNeg, HIGH);
 
  }else if(mode == 2){ //STOP
    digitalWrite(pinPos, LOW);
    digitalWrite(pinNeg, LOW);
  
  }else if(mode == 3){ //CCW
    digitalWrite(pinPos, HIGH);
    digitalWrite(pinNeg, LOW);
   
  }else if(mode == 4){ //BREAK
    digitalWrite(pinPos, HIGH);
    digitalWrite(pinNeg, HIGH);
  
  }
}

void SW0_ft(bool pinstate) {
  duty_rate += 25;
  if(duty_rate>255){
    duty_rate = 255;
  }
  Serial.println(duty_rate);
}

void SW1_ft(bool pinstate) {
  duty_rate -= 25;
  if(duty_rate<=0){
    duty_rate = 0;
  }
  Serial.println(duty_rate);
}

void SW2_ft(bool pinstate) {
  duty_rate = 0;
  Serial.println(duty_rate);
}
