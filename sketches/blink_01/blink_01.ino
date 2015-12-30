 /*
  * ENCENDER UN LED
  * Utilizamos el led que tiene Default el Galileo
  */

int led = 13;

void setup()
{
  //La funcion pinMode() configura el pin y sea de salida (OUTPUT)
  //o de entrada (INPUT)
  pinMode(led, OUTPUT);

  // Arduino tiene muchas otras funciones ya predefinidas.
  // Puedes encontrar más funciones en http://arduino.cc/en/Reference
}

void loop()
{
  //La función digitalWrite manda un pulso eléctrico a la salida
  //que se desee utilizar, en este caso en el pin 13, dándole 
  //una salida de 5v (HIGH)
  digitalWrite(led, HIGH);
  
  //La funcion delay() hace una pausa con la configuración que tiene
  delay(1000);

  //Ahora en ese mismo pin le da una salida de 0v (LOW)
  digitalWrite(led, LOW);
  
  //Espera 1000 milisegundos
  delay(1000);
  
  //Termina loop pero se vuelve a repetir indefinidamente
}
