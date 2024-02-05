int comptar = 11;

void setup() {
  Serial.begin(9600);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  
  for (int i = 0; i < comptar; i++) {  // Cambiado el operador <= a <
    Serial.print(i);

    if (i < comptar - 1) {
      Serial.print("-");
    }
  }

  Serial.println();  // Agregado para un salto de línea al final
}

void loop() {
  // El bucle loop() está vacío ya que solo deseas ejecutar el código en setup()
}
