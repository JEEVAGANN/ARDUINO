int ir=7;
int a;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(ir);
  Serial.println(a);
  delay(200);
  if(a==1)
  {
    digitalWrite(2,LOW);
  }
  else
  {
    digitalWrite(2,HIGH);
  }
}
