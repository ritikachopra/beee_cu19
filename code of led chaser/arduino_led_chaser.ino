int pinscount=10;
int pins[]={2,3,4,5,6,7,8,9};
void setup() 
{
  for(int i=0;i<pinscount;i=i+1)
  {
    pinMode(pins[i], OUTPUT);
  }
}
void loop()
{
  for(int i=0;i<pinscount;i=i+1)
  {
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
   }
   
for(int i=pinscount-1;i>0;i=i+1)
{
digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  

}
}
