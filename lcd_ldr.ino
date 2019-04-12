#include <LiquidCrystal.h>

LiquidCrystal lcd(6, 7, 9, 10, 11, 12);
byte ldr = A0;
int pinRelay=2;
int hitung = 0;
int nilai;
unsigned long time;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  nilai = analogRead(ldr);
  //int nilaiLed = map (nilai,0,1023,255,0);
  if(nilai < 390){
    hitung=hitung+1;
    time=millis();
    Serial.println(time);
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("NILAI LDR :");
  lcd.setCursor(0, 1);
  lcd.print(nilai);
  lcd.print(" & ROT: ");
  lcd.print(hitung);
  if(hitung >=80) {
    digitalWrite(pinRelay, LOW);
    time=millis();
    Serial.println("##################");
    Serial.println(time);
    Serial.println("##################");
    Serial.end();
  }
  
  //analogWrite(ledPin,nilaiLed);
  delay (150);
}
