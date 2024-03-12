const byte led0 = 3;          
const byte led1 = 5;          
const byte led2 = 6;          
const byte led3 = 9;         
const byte led4 = 10;         
const byte val0 = A0;         
int valorEntrada;             
float voltatge;

void setup()
{
  Serial.begin(9600);        
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
}

void loop()
{
  valorEntrada = analogRead(val0);  
  voltatge = ( (float) valorEntrada * 5.0 ) / 1023;  

  if (voltatge <= 1 )
  {
    Serial.println("Voltatge entre 1 i 2");
    analogWrite(led0, voltatge * 255);
    analogWrite(led1, 0);   
    analogWrite(led2, 0);   
     analogWrite(led3, 0);   
    analogWrite(led4, 0);   
  }

if (voltatge >= 1 && voltatge < 2)
  {
    Serial.println("Voltatge entre 1 i 2");
    analogWrite(led0, 255);
    analogWrite(led1, (voltatge -1) * 255);  
    analogWrite(led2, 0);      
    analogWrite(led3, 0); 
    analogWrite(led4, 0);     
  }

  if (voltatge >= 2 && voltatge < 3)
  {
    Serial.println("Voltatge entre 2 i 3");
    analogWrite(led0, 255);
    analogWrite(led1, 255);
    analogWrite(led2, (voltatge -2) * 255); 
    analogWrite(led3, 0);   
    analogWrite(led4, 0);      
  }

  if (voltatge >= 3 && voltatge < 4)
  {
    Serial.println("Voltatge entre 3 i 4");
    analogWrite(led0, 255);
    analogWrite(led1, 255);
    analogWrite(led2, 255);
    analogWrite(led3, (voltatge -3) * 255); 
    analogWrite(led4, 0);     
  }

  if (voltatge >= 4 && voltatge < 5)
  {
    Serial.println("Voltatge entre 4 i 5");
    analogWrite(led0, 255);
    analogWrite(led1, 255);
    analogWrite(led2, 255);
    analogWrite(led3, 255);
     analogWrite(led4, (voltatge -4) * 255);
  }

  delay(100);   
}
