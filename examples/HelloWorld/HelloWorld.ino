#include <Wire.h>
#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2); // (address, rows, coloum) usually uses 0x27 for the address

void setup() {
  lcd.init(); // initialize the lcd
  lcd.init();
  lcd.backlight(); // Turn on backlight
  // lcd.noBacklight(); // Turn off backlight
  lcd.setCursor(3, 0); // x,y cursor
  lcd.print("Hello, world!");
}

void loop() {

}

