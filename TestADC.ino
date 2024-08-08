#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Адрес 0x27 для I2C

int val = 0;

void setup() {
  lcd.init(); // Инициализация ЖК-дисплея
  lcd.backlight(); // Включение подсветки
  
  Serial.begin(9600);

  pinMode(A0, INPUT);
}

void loop() {
  val = analogRead(A0);

  Serial.println(val);

  lcd.print(val);
  lcd.print(" ");

  delay(800);
}