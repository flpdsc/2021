// SW0 을 누를 때 마다 LED0을 ON/OFF
// SW1 을 누를 때 마다 LED1을 ON/OFF

int pinLed[2] = {12, 11};
int pinSwitch[2] = {2, 3};
boolean ledStatus[2] = {0, 0};
boolean state_change = LOW;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  for (int i=0; i<2; i++){
    pinMode(pinSwitch[i], INPUT);
    pinMode(pinLed[i], OUTPUT);
  }
  attachInterrupt(digitalPinToInterrupt(pinSwitch[0]), state_change, RISING); 
  
}

void loop() {
  // put your main code here, to run repeatedly:


  void state_change(){ //스위치가 눌러졌을 때 해야할 동작을 구현



  if (digitalRead(pinSwitch[0])){

    if(ledStatus[0] == 0){
    
      digitalWrite(pinLed[0], HIGH);
      ledStatus[0] = 1;
    
    } else if(ledStatus[0] == 0) {
    
      digitalWrite(pinLed[0], LOW);
      ledStatus[0] = 0;
    
    }
  }      


  if (digitalRead(pinSwitch[1])){
    if(ledStatus[1] == 0){
    
      digitalWrite(pinLed[1], HIGH);
      ledStatus[1] = 1;
    
    } else if(ledStatus[1] == 0) {
    
      digitalWrite(pinLed[1], LOW);
      ledStatus[1] = 0;
    
    }   
  }

  }

}
