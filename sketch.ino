int ledPin=13;
int buttonPin=2;
void setup(){
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}
void loop(){
int buttonState=digitalRead(buttonPin);
if(buttonState == HIGH )
{
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);
}
// else{
//   digitalWrite(ledPin, LOW);
// }
}