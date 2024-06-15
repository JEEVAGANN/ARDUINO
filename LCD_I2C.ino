#include<LiquidCrystal_I2C.h>
#include<wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
}

void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("JEEVAGAN N");
  lcd.setCursor(0,1);
  lcd.print("21ECR085");

}
