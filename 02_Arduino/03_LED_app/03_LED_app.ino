int apinLed[8] = {12, 11, 10, 9, 8, 7, 6, 5};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<8; i++)
  {
    pinMode(apinLed[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  int i;
  
  for(i=0; i<4; i++)
  {
    digitalWrite(apinLed[i], HIGH);
    digitalWrite(apinLed[i+4], HIGH);
    delay(100);
    digitalWrite(apinLed[i], LOW);
    digitalWrite(apinLed[i+4], LOW);
  }
  
  for(i=2; i>0; i--)
  {
    digitalWrite(apinLed[i], HIGH);
    digitalWrite(apinLed[i+4], HIGH);
    delay(100);
    digitalWrite(apinLed[i], LOW);
    digitalWrite(apinLed[i+4], LOW);
  }
}
