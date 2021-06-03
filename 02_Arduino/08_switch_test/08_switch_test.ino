int pinSwitch = 2;
int cnt = 0;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(pinSwitch, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(pinSwitch)==HIGH) {
    Serial.println("Pushed");
    Serial.println(cnt);
    cnt++;
    delay(500);
    
  }
}
