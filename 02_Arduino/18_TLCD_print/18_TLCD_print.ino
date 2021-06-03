#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("hello.");
  lcd.setCursor(0,1);
  lcd.print("bye");
}

void loop() {
  // put your main code here, to run repeatedly:

}
