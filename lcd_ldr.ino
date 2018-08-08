#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 9, 10, 11, 12);
//byte ldr = A0;
//const int ledPin = 3;
//int nilai;
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("NAMA");
  lcd.setCursor(2, 1);
  lcd.print("DENY PRADANA");
}

void loop() {
  // put your main code here, to run repeatedly:
  //nilai = analogRead(ldr);
  //int nilaiLed = map (nilai,0,1023,255,0);
  /*
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("NILAI LDR :");
  lcd.setCursor(0, 1);
  lcd.print(nilai);
  */
  //analogWrite(ledPin,nilaiLed);
  //delay (1000);
}
