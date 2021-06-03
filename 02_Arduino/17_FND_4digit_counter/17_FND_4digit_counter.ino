#include <YetAnotherPcInt.h>

// FND의 앞 두자리에 원하는 숫자를 표시
int sig = A1, vcc = A2, gnd = A3;
int FndData[8] = {A0,12,11,10,9,8,7,6};
int FndSel[4] = {5,4,3,2};

uint8_t FndValue[16] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x27,
                        0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71};


void setup() {
  // put your setup code here, to run once:

  // Mini reed
  pinMode(sig, INPUT);
  pinMode(vcc, OUTPUT);
  pinMode(gnd, OUTPUT);
  digitalWrite(vcc, HIGH);
  digitalWrite(gnd, LOW);

  PcInt::attachInterrupt(sig, number_counter, RISING);
 
  // FND
  for(int i=0; i<8; i++){
    pinMode(FndData[i],OUTPUT);
    //digitalWrite(FndData[i],HIGH);
  }
  for(int i=0; i<4; i++){
    pinMode(FndSel[i],OUTPUT);
    digitalWrite(FndSel[i],LOW);
  }

}

int i = 0;
int j = 0;
int num = 0;

void loop() {
  // put your main code here, to run repeatedly:
  FND4_Display(num); //4자리 숫자
}

void fndSelOut(int data){ //출력하고 싶은 digit을 설정하는 함수 (1~4)
  for(i=0; i<4; i++){
    digitalWrite(FndSel[i], HIGH);
  }

  if(data < 5 && data > 0) {
    digitalWrite(FndSel[data-1], LOW);
  }
}

void fndDataOut(int data){
  for(i=0; i<8; i++){
    if(FndValue[data] & (0x01<<i)){ //각 비트들 값에 따라서 LED ON/OFF
      digitalWrite(FndData[i],HIGH);
    } else {
      digitalWrite(FndData[i],LOW);
    }
  } 
}

void FND4_Display(int data){
  
  int num_1000 = data / 1000;      //1
  int num_100 = (data%1000) / 100; //2
  int num_10 = (data%100) / 10;    //3
  int num_1 = (data%10);           //4

  int num[4] = {num_1000, num_100, num_10, num_1};

  for(int i=0; i<4; i++){
    fndDataOut(num[i]);  //display 데이터
    fndSelOut(i+1);   //display 위치
    delay(1);
    fndSelOut(0);   //display off
    delay(1);      
  }   
}

void number_counter(bool pinstate){

  num++;
  delay(500);
  
}
