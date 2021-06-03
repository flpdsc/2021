#define vcc 3
#define gnd 4
#define sig 2

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(vcc, OUTPUT);
  pinMode(gnd, OUTPUT);
  pinMode(sig, INPUT);

  attachInterrupt(digitalPinToInterrupt(sig), tilt_state_print, CHANGE);

  digitalWrite(vcc, HIGH);
  digitalWrite(gnd, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

void tilt_state_print(){
  if(!digitalRead(sig)){  //tilt OFF : HIGH, tile ON : LOW
      Serial.println("TILT ON");  //LOW
  } else {
      Serial.println("TILT OFF"); //HIGH
  }
  delay(500);
}
