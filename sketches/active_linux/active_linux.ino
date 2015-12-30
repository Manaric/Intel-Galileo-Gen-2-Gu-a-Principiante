void setup() {
  // put your setup code here, to run once:
  
  /*
   * Este código no lo he probado personalmente
   * así que si lo pruebas es bajo tu propio riesgo
   */
  
  system("cp /etc/inittab /etc/inittab.bak");  // Respalda inittab
  // Cambia todos los "S:2345" con "S0:2345" (cambia los puertos seriales):
  system("sed -i 's/S:2345/S0:2345/g' /etc/inittab");
  // Reemplaza todos los "ttyS1" con "ttyGS0" (Cambiando los puertos):
  system("sed -i 's/ttyS1/ttyGS0/g' /etc/inittab");
  // Reemplaza todos los "grst" con "#grst" para comentar esa linea completamente:
  system("sed -i 's/grst/#grst/g' /etc/inittab");
  // Cambia todos los "clld" con "#clld" para comentar toda esa línea:
  system("sed -i 's/clld/#clld/g' /etc/inittab");
  system("kill -SIGHUP 1");
}

void loop() {
  // put your main code here, to run repeatedly:

}
