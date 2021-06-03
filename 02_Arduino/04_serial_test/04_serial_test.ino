void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // 통신속도
  Serial.write('H');
  Serial.write('E');
  Serial.write('L');
  Serial.write('L');
  Serial.write('O');
  Serial.write('\n');

  Serial.print(78);
  Serial.print(1.23456);
  Serial.print('N');
  Serial.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write("Hello World..!!");
  Serial.println();
  delay(1000);
}
