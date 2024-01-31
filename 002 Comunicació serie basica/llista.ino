/********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********** Variables ***********************************************************

//********** Setup ***************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

//********* Loop *****************************************************************
void loop()                 // run over and over again
{
  Serial.println("escull el numero de la operacio que vol realitzar");  
  delay(1000);
  Serial.println("1. Comprovar el nuemro de la tarjeta de credit");
  delay(1000);
  Serial.println("2. Comprobar el numero de compte bancari");
  delay(1000);
  Serial.println("3. Buscar un numero perdut de la tarjeta de credit");
  delay(1000);
  Serial.println("Marc Alvarez");
}

//********* Funcions *************************************************************