int pinPos = 5;
int pinNeg = 4;
int pinEn = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(pinPos, OUTPUT);
  pinMode(pinNeg, OUTPUT);
  pinMode(pinEn, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //CW
  digitalWrite(pinPos, LOW);
  digitalWrite(pinNeg, HIGH);
  digitalWrite(pinEn, HIGH);    
  delay(1000);

  //STOP
  digitalWrite(pinPos, LOW);
  digitalWrite(pinNeg, LOW);
  digitalWrite(pinEn, LOW);    
  delay(1000);

  //CCW
  digitalWrite(pinPos, HIGH);
  digitalWrite(pinNeg, LOW);
  digitalWrite(pinEn, HIGH);    
  delay(1000);

  //BREAK
  digitalWrite(pinPos, HIGH);
  digitalWrite(pinNeg, HIGH);
  digitalWrite(pinEn, HIGH);    
  delay(1000);

}
