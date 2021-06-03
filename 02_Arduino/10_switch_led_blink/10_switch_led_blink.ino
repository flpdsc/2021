// SW0 누르면 LED0 OFF/BLINK(0.5초)

int pinLed0 = 12;
int pinSwitch0 = 2;
boolean ledStatus0 = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  pinMode(pinLed0, OUTPUT);
  pinMode(pinSwitch0, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(pinSwitch0)==HIGH){ //레벨체크
    if(ledStatus0==false){
      ledStatus0=true;
    } else{
      ledStatus0 = false;
    }
    Serial.println("Pushed SW0");
    delay(500);
  }


    //상태값에 따른 구현
    if(ledStatus0==false){
      digitalWrite(pinLed0, LOW);
    }else{
      digitalWrite(pinLed0, HIGH);
      delay(500);
      digitalWrite(pinLed0, LOW);
      delay(500);
    }

}
