void setup() {
  // put your setup code here, to run once:
  
  //Configure output pins
  pinMode(8, OUTPUT); //Relevator on/off pin
  pinMode(9, OUTPUT); //Min voltage pin
  pinMode(10, OUTPUT); //Max voltage pin
  
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //Set first output values
  digitalWrite(8, LOW); //Off
  
  delay(2000); //Wait 2 seconds
  
  digitalWrite(8, HIGH); //On
  
  delay (2000); //Wait 2 seconds
}
