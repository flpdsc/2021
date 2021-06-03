// 0~F 1초마다 출력

int FndData[8] = {A0,12,11,10,9,8,7,6};
int FndSel[2] = {5,4};

uint8_t FndValue[16] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x27,
                        0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71};


void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<8; i++){
    pinMode(FndData[i],OUTPUT);
    //digitalWrite(FndData[i],HIGH);
  }
  for(int i=0; i<2; i++){
    pinMode(FndSel[i],OUTPUT);
    digitalWrite(FndSel[i],LOW);
  }

}

int i = 0;
int j = 0;
void loop() {
  // put your main code here, to run repeatedly:
  for(j=0; j<16; j++){
    for(i=0; i<8; i++){ //0x3f
      if(FndValue[j] & (0x01<<i)){ //각 비트들 값에 따라서 LED ON/OFF
        digitalWrite(FndData[i],HIGH);
      } else {
        digitalWrite(FndData[i],LOW);
      }
    }
    delay(1000);      
  }
}
