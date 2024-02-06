/**********************************************************************************
**                                                                               **
**                          Control Structures      Marc Alvarez                             **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int inicioTabla = 2;
int finTabla = 10;

//********** Setup ****************************************************************
void setup()      // sempre
{
  Serial.begin(9600);     //  9600 bps

  for (int taula = inicioTabla; taula <= finTabla; taula++)
  {
    Serial.print("Taula de multiplicar del ");
    Serial.println(taula);

    for (int i = 0; i <= 10; i++)
    {
      delay(100);
      Serial.print(taula);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(taula * i);
    }
    Serial.println(); // per afeixir una linia blanca entre taulas
  }

}

//********** Loop *****************************************************************
void loop()   // sempre
{
}
