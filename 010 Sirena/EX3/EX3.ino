/**********************************************************************************
**                                                                               **
**                                 Despertador                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
#include <Arduino.h>

//********** Variables ***********************************************************
const byte altaveu = 9;      // Pin per a l'altaveu

// Definim les notes musicals en termes de freqüència
#define NOTE_DO  261
#define NOTE_RE  293
#define NOTE_MI  329
#define NOTE_FA  349

// Definim la durada de cada nota en mil·lisegons
const int duradaNota = 500;

// Definim la durada de l'espai en mil·lisegons
const int duradaEspai = 500;

//********** Setup ***************************************************************
void setup()
{
  pinMode(altaveu, OUTPUT);   // Defineix el pin 9 com a sortida per l'altaveu
}

//********** Loop *****************************************************************
void loop()
{
  // Reproduir les 4 notes
  tocarNota(NOTE_DO);
  delay(duradaNota);

  tocarNota(NOTE_RE);
  delay(duradaNota);

  tocarNota(NOTE_MI);
  delay(duradaNota);

  tocarNota(NOTE_FA);
  delay(duradaNota);

  // Espai de silenci
  noTone(altaveu);
  delay(duradaEspai);
}

// Funció per tocar una nota a l'altaveu
void tocarNota(int freq)
{
  tone(altaveu, freq);   // Activa la nota a la freqüència especificada
}
