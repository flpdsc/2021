// SW0 을 누를 때 마다 LED0을 ON/OFF
// SW1 을 누를 때 마다 LED1을 ON/OFF

int pinLed = 12;
int pinSwitch = A0;
boolean ledStatus = 0;
boolean pre_value = LOW, cur_value = LOW; //★...스위치의 이전값, 현재값

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(pinSwitch, INPUT);
  pinMode(pinLed, OUTPUT);
      
}

void loop() {
  // put your main code here, to run repeatedly:

  cur_value = digitalRead(pinSwitch); //★...현재값을 읽어서 저장

  if ( pre_value == LOW && cur_value ==HIGH ){ //★...엣지체크

    if(ledStatus == 0){
    
      digitalWrite(pinLed, HIGH);
      ledStatus = 1;
    
    } else if(ledStatus == 1) {
    
      digitalWrite(pinLed, LOW);
      ledStatus= 0;
    
    }

    Serial.println("L");
    //delay(500);
    
  }      

  pre_value = cur_value;  
