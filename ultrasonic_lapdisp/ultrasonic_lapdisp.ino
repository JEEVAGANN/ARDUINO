int trio=7;
int echo=6;
long time;
long distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(6,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trio,LOW);
delayMicroseconds(2);
digitalWrite(trio,HIGH);
delayMicroseconds(10);
digitalWrite(trio,HIGH);

time=pulseIn(echo,HIGH);
distance=time/29/2;
Serial.println(distance);
delay(200);
}
