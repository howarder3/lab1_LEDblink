int ledPin = 10;  //define digital 10

void setup()
{
  // Set up both ports at 9600 baud. This value is most important
  // for the XBee. Make sure the baud rate matches the config
  // setting of your XBee.
//  XBee.begin(9600);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //define output
}
void loop()
{
  digitalWrite(ledPin, HIGH);   //on
  delay(200);  //delay 1s
  digitalWrite(ledPin, LOW);    //off
  delay(200);  //delay 1s
}


