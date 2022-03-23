const int ledV =3;
const int ledA =4;
const int leB =5;
const int ledD =6;

void setup()
{
  pinMode(ledV,OUTPUT);
  pinMode(ledA,OUTPUT);
   pinMode(leB,OUTPUT);
  pinMode(ledD,OUTPUT);
}

void loop()
{	
 digitalWrite(ledV, HIGH);
   delay(2000);
 digitalWrite(ledA, HIGH);
   delay(2000);
 digitalWrite(leB, HIGH);
   delay(2000);
 digitalWrite(ledD, HIGH);
   delay(2000);
 digitalWrite(ledV, LOW);
 digitalWrite(ledA, LOW);
   digitalWrite(leB, LOW);
 digitalWrite(ledD, LOW);
   delay(2000);
}
