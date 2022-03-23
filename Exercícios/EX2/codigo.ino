const int ledV =3;
const int ledA =4;

void setup()
{
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
  
}

void loop()
{	
 digitalWrite(ledV, HIGH);
  delay(500);
 digitalWrite(ledV, LOW);
  delay(500);
  digitalWrite(ledA, HIGH);
  delay(500);
 digitalWrite(ledA, LOW);
  delay(500);
}
