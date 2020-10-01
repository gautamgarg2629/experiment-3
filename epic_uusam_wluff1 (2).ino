

//led connected on pin 13
void setup()
  
{
  for(int i=10; i<=13;i++){
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for(int i =10;i<14;i++){
    
    if(i!=13)
{
  digitalWrite(i, HIGH);
  
  digitalWrite(i+1, LOW);
  delay(200); // Wait for 1000 millisecond(s)
}
else 
    digitalWrite(i, HIGH);
  
  digitalWrite(i-3, LOW);
  delay(200);\
}
}
