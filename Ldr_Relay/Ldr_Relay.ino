//int blue=11;
const int relay=2;
void setup() {
  // put your setup code here, to run once:
  //pinMode(blue,OUTPUT);
  pinMode(relay,OUTPUT);
   
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr=analogRead(A5);
  Serial.println(ldr);
  if(ldr<500){
    //digitalWrite(blue,HIGH);
   digitalWrite(relay,HIGH);
    
  }
  //digitalWrite(blue,LOW);
  digitalWrite(relay,LOW);
}
