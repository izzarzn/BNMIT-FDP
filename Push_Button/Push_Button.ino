const int push=12;
const int blue=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(push,INPUT);
  pinMode(blue,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(push))
  {
    digitalWrite(blue,HIGH);
  }
  digitalWrite(blue,LOW);
}
