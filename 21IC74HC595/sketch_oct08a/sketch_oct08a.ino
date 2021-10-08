#define c 13
#define d 12
#define l 11
void setup() {
  pinMode(c, OUTPUT);
  pinMode(l, OUTPUT);
  pinMode(d, OUTPUT);
}

void loop() {
  for(int i=0;i<256;i++)
  {
    digitalWrite(l,LOW);
    shiftOut(d,c,LSBFIRST,i);
    digitalWrite(l,HIGH);
    delay(500);
  }
}
