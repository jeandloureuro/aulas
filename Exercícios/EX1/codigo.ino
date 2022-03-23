  const int ledV =3;


void setup()
{
  pinMode(ledV,OUTPUT);
  
  
}

void loop()
{	
 digitalWrite(ledV, HIGH);
  delay(500);
 digitalWrite(ledV, LOW);
  delay(500);
} 
