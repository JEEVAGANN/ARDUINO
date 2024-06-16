int a=A0;
int b=13;
void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
      pinMode(a,INPUT);
      pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int y=analogRead(a);
  if(y>1000)
  {
    digitalWrite(b,HIGH);
    Serial.println("Soil is Dry");
    Serial.println(y);
  }
  else if(y>=500)
  {
    digitalWrite(b,HIGH);
    Serial.println("Soil has some moisture");
    Serial.println(y);
  }
  else
  {
     Serial.println("Soil is wet");
     digitalWrite(b,LOW);
     Serial.println(y);
  }
}
