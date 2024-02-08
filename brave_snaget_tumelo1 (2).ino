char reading ;
void setup()
{
  Serial.begin(9600);
             pinMode(6,0);
             pinMode(7,0); }
void loop ()
{
  if (Serial.available()>0)
    reading = Serial.read();
  analogWrite(12,(digitalRead(7)||reading=='L')*(analogRead(A1)/4));
  analogWrite(11,(digitalRead(6)||reading=='R')*(analogRead(A0)/4));

}