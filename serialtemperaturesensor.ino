 int val;
int tempPin = 1;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(tempPin);
  float cel = ( val/1024.0)*500.0; 
  // float cel = mv/10;
  float farh = (cel*9)/5 + 32;

  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C  ");
  Serial.print(farh);
  Serial.print("*F  ");
  Serial.println();
  delay(1000);
  

