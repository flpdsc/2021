int pinGnd = A2, pinVcc = A1, pinCds = A0;
 
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinCds, INPUT);

  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int adcData = analogRead(pinCds);
  float adcVolt = adcData * (5/1024.0) * 1000.0;
  Serial.print("CDS : ");
  Serial.print(adcData);
  Serial.print(", Volt : ");
  Serial.print(adcVolt);
  Serial.println("mV");
  // sprintf 함수를 이용해서 한줄로 출력
  delay(500);
  
}
