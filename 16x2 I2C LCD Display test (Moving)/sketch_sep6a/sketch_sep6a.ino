#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String message = "Welcome to Learn Logic with Munim!   ";

void setup() {
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("YouTube:");
}

void loop() {
  for (int i = 0; i < message.length(); i++) {
    
    lcd.setCursor(0, 1);
    
    lcd.print(message.substring(i, i + 16));
    
    if (message.substring(i, i + 16).length() < 16) {
      for (int j = 0; j < (16 - message.substring(i, i + 16).length()); j++) {
        lcd.print(" ");
      }
    }
    
    delay(300); 
  }
}