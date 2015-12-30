void setup() {
  // Inicia el servicio de telnet en el Galileo
  system("telnetd -l /bin/sh");
  
  //Le da al Galileo la Dirección IP estática
  system("ifconfig eth0 static 192.168.0.5 255.255.255.255");
}

void loop() {
  // put your main code here, to run repeatedly:

}
