
const byte led0 = 5;          
const byte buttonPin = 2;   
byte buttonState = 0;         
bool estat = 1;

void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(buttonPin, INPUT); 
}



void loop()
{
  buttonState = digitalRead(buttonPin);  
  
  if (buttonState == 0)  
  { 
    digitalWrite(led0, estat);
    estat = !estat;
    delay(300); 
  }
   
  delay(10000);  
}
