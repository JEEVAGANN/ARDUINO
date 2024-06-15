#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int trig=7;
int echo=6;
int time;
int distance;
void setup() 
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.backlight();
  lcd.setBacklight(HIGH);
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);  
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);

  time=pulseIn(echo,HIGH);
  distance=time/58.2;
  Serial.println(distance);
  String disp = String(distance);
  lcd.clear();
  lcd.print("distance :");
  lcd.setCursor(0, 1);
  lcd.print(disp);
  lcd.print(" cm");
  delay(450);
}
