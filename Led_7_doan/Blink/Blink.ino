void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}
void Tatled()
{
  for(int i=7;i<=13;i++)
  {
    digitalWrite(i,LOW);
  }
}
void loop() 
{
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  Tatled();
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  Tatled();
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);
  Tatled();
}
