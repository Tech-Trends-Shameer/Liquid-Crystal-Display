#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Example code with correct I2C address and wiring
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Adjust the I2C address based on your LCD module

void setup() {
  lcd.begin();
  lcd.print("Hello World!");
}

void loop() {
  // Your main code here
}
