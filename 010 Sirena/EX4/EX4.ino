/**********************************************************************************
**                                                                               **
**                                                              **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include <Arduino.h>

//********** Variables ***********************************************************
const byte altaveu = 9;       // Pin altavey
const unsigned int freq2 = 1250;  
const unsigned int duracio_nota = 20; 
const unsigned int espai_entre_notes = 100; 


void setup()
{
  pinMode(altaveu, OUTPUT); 
}


void loop()
{

  for (int i = 0; i < 4; i++) {
    tone(altaveu, freq1, duracio_nota); 
    delay(duracio_nota);
    noTone(altaveu); 
    delay(espai_entre_notes); 

    tone(altaveu, freq2, duracio_nota); 
    delay(duracio_nota);
    noTone(altaveu); 
    delay(espai_entre_notes); 
  }

  delay(500); 
}
