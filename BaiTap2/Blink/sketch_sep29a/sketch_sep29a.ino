
void setup() {
  pinMode(7,INPUT_PULLUP);
   pinMode (13, OUTPUT);
}

void loop() {
int nut = digitalRead(7);
if (nut==HIGH){
  digitalWrite(13,LOW);}
  else
  {digitalWrite(13,HIGH);}
 
}
