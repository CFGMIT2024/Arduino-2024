/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  // Estructura if/else per determinar si l'aigua bull o no
  if (tempAigua >= 100) {
    Serial.print("Aigua bullint");
  } else {
    Serial.print("Aigua encara no bull");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}
