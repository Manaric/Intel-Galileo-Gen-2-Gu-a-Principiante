void setup() {

  //Cambia la interface eth0 a dhcp en el archivo interfaces
  system("echo “iface eth0 inet dhcp” >>/etc/network/interfaces");
  
  //Enciende la interfaz eth0
  system("ifconfig eth0 up");
}

void loop() {
  // put your main code here, to run repeatedly:

}
