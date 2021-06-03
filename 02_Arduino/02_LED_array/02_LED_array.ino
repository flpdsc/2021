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
  for(int i=0; i<8; i++)
  {
    digitalWrite(apinLed[i], HIGH);
    delay(100);
  }
  delay(1000);
  for(int i=0; i<8; i++)
  {
    digitalWrite(apinLed[i], LOW);
    delay(100);
  }
  delay(1000);
}
