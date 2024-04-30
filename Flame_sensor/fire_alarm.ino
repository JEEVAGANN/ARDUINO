int b= 12;
int f = 11;
int F1;
void setup() 
{
 pinMode (b, OUTPUT);   
 pinMode (f, INPUT);
 Serial.begin(9600);
}
void loop()
{
 F1 =digitalRead(f);
 if (F1== LOW)
 {
 digitalWrite (b, HIGH);
 }
 else
 {
 digitalWrite (b, LOW);
 }
}