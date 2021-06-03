int pinLed[2] = {12,11};
boolean ledState[2] = {0,0};

void setup() {
  // put your setup code here, to run once:

  //시리얼 통신 설정
  Serial.begin(115200); //Serial.begin(speed, config)

  Serial.println("Serial LED Control !!");
  Serial.print("IN >> ");

  //LED0 설정
  for(int i=0; i>1; i++){
    pinMode(pinLed[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  char data;

  
  if(Serial.available() > 0) //수신된 데이터가 있으면, 수신 데이터의 갯수 반환
  {
    data = Serial.read(); //수신된 데이터 읽기
    Serial.write(data);   //데이터를 다시 PC로 송신

    if(data == 'A'){
      if(ledState[0] == false){  //LED 꺼져있을 때
        digitalWrite(pinLed[0], HIGH);
        ledState[0] = true;      //켜진 상태로 상태값 변경
      } else{                 //LED 켜져있을 때
        digitalWrite(pinLed[0], LOW);
        ledState[0] = false;      //꺼진 상태로 상태값 변경
      }
    } else if(data == 'B'){
      if(ledState[1] == false){  //LED 꺼져있을 때
        digitalWrite(pinLed[1], HIGH);
        ledState[1] = true;      //켜진 상태로 상태값 변경
      } else{                 //LED 켜져있을 때
        digitalWrite(pinLed[1], LOW);
        ledState[1] = false;      //꺼진 상태로 상태값 변경
      }
    }
   }
}
