// Leer el estado de un pin de salida del arduino.

bool valorpin = 0;// variable donde se guarda el estado del pin. Es este caso es el 13 conde hay Led.

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(3,INPUT_PULLUP);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1);

valorpin = bitRead(PORTB,5);// lee el registro de salida del puertoB donde esta el pin 13. Bit 5. el bit0 es el pin 8

if (valorpin != 0){
Serial.println(" valor 1 del pin led 13");// se imprime el valor del estado de la variable

}
else{
  Serial.println("valor 0 pin led 13");
  }
  delay (500);

digitalWrite(13,0);

valorpin = bitRead(PORTB,5);// lee el registro de salida del puertoB donde esta el pin 13. Bit 5. el bit0 es el pin 8

if (valorpin != 0){
Serial.println(" valor 1 del pin led 13");

}
else{
  Serial.println("valor 0 pin led 13");
  }
  delay (500);

  
}
