
const byte led0 = 5;          
const byte buttonPin = 2;   
byte buttonState = 0;         


void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(buttonPin, INPUT); 
}



void loop()
{
  buttonState = digitalRead(buttonPin);  
  
  if (buttonState == high)  
  {
    digitalWrite(led0, LOW); 
  }
  else 
  {
    digitalWrite(led0, HIGH); 
  }
  
  delay(200);  
}
