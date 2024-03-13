int a;
int b=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(b,OUTPUT);
  pinMode(a,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(A0);
  Serial.println(a);
  if(a>250)
  digitalWrite(b,HIGH);
  else
  digitalWrite(b,LOW);
}
