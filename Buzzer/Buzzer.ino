const int buzzer=3;
int count=1;
void setup()
{
  pinMode(buzzer,OUTPUT);
}
void loop()
{
  
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(buzzer,LOW);
    delay(1000);
    
}
