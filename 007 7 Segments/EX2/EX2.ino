const byte A = 7;          // donar nom al pin 5 de l’Arduino
const byte B = 6;          // donar nom al pin 6 de l’Arduino
const byte C = 8;          // donar nom al pin 7 de l’Arduino
const byte D = 9;          // donar nom al pin 8 de l’Arduino
const byte E = 12;          // donar nom al pin 9 de l’Arduino
const byte F = 11;         // donar nom al pin 10 de l’Arduino
const byte G = 10;         // donar nom al pin 11 de l’Arduino
const byte H = 5;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(A,OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B,OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C,OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D,OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E,OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F,OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G,OUTPUT);     // definir el pin 11 com una sortida
  pinMode(H,OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
  
  delay(1000);

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,LOW);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,LOW);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,LOW);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

  delay(1000);
  }