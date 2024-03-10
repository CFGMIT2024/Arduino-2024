/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include <Arduino.h>

//********** Variables ***********************************************************
const byte xiulet = 9;        // Pin per a l'altaveu
const byte pot0 = A0;         // Pin per al potenciòmetre
int valPot0;                   // Guarda el valor del potenciòmetre

//********** Setup ***************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // Defineix el pin 9 com a sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // Llegeix el valor del potenciòmetre

  tone(xiulet, 1000, valPot0);    // Genera una freqüència de 1 kHz amb durada segons valPot0
  delay(3000);                    // Manté el xiulet durant 3 segons
  noTone(xiulet);                 // Atura el xiulet
  delay(1000);                    // Espera 1 segon abans de començar de nou
}
