#include <HT1621.h>
#define LCD_CS_PIN 6
#define LCD_WR_PIN 7
#define LCD_DATA_PIN 8
HT1621 lcd;
void setup() {
  lcd.begin(LCD_CS_PIN, LCD_WR_PIN, LCD_DATA_PIN);
  lcd.backlight();
  lcd.clear();
  lcd.setBatteryLevel(3);
}

void loop(){
  lcd.clear();
  lcd.print("AbcCde");
  delay(2000);
  lcd.clear();
  lcd.print("EfFGHi");
  delay(2000);
  lcd.clear();
  lcd.print("IJlLMn");
  delay(2000);
  lcd.clear();
  lcd.print("oOPrSt");
  delay(2000);
  lcd.clear();
  lcd.print("uUY");
  delay(2000);
  lcd.clear();
  lcd.print("123456");
  delay(2000);
  lcd.clear();
  lcd.print("7890", true); // left padded
  delay(2000);
  lcd.clear();
  lcd.print("  _-|*"); // Spaces
  delay(2000);
  lcd.clear();
  lcd.print("HELO");
  delay(700);
  lcd.clear();
  lcd.print("bYE");
  delay(700);
  lcd.clear();
  lcd.print("123*", true); // Degrees
  delay(700);
  lcd.clear();
  lcd.print((long)123456);
  delay(700);
  lcd.clear();
  lcd.print(1234.10, 2);
  delay(700);
  lcd.clear();
  lcd.print(999.123234);
  delay(700);
  lcd.clear();
  lcd.print(1250.0, 3); /// BUG? PRINTS 999.999
  delay(700);
  lcd.clear();
  lcd.print(111.1111, 3);
  delay(700);
}
