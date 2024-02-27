const byte A = 7;
const byte B = 6;
const byte C = 8;
const byte D = 9;
const byte E = 12;
const byte F = 11;
const byte G = 10;
const byte H = 5;
const byte buttonPin = 2; 
int count = 0; 

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop()
{
  if (digitalRead(buttonPin) == HIGH)
  {
    count++;
    if (count == 10) {
      count = 0; 
    }
    displayNumber(count);
    delay(250);
  }
}

void displayNumber(int num)
{
  switch (num)
  {
    case 0:
  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 1:

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 2:

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,LOW);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 3:

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 4:

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 5:

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,LOW);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 6:

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,LOW);    // posar a 5V el pin 9
  digitalWrite(F,LOW);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;
    case 7:

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,LOW);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,LOW);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
    break;

    case 8:

  digitalWrite(A,HIGH);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,HIGH);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12

    break;

    case 9:

  digitalWrite(A,LOW);    // posar a 5V el pin 5
  digitalWrite(B,HIGH);    // posar a 5V el pin 6
  digitalWrite(C,LOW);    // posar a 5V el pin 7
  digitalWrite(D,HIGH);    // posar a 5V el pin 8
  digitalWrite(E,HIGH);    // posar a 5V el pin 9
  digitalWrite(F,HIGH);    // posar a 5V el pin 10
  digitalWrite(G,HIGH);    // posar a 5V el pin 11
  digitalWrite(H,LOW);    // posar a 5V el pin 12
      break;
  
  }
}
