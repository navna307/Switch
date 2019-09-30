void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
boolean a;
digitalRead(2);
a==digitalRead(2);
if(a==HIGH)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
}
