// Definir pines
const int pinPotenciometro = A0;  //potenciómetro

//Conexiones driver al Arduino
const int pinMotorPWM = 9;       //pin PWM del driver IBT2 
const int pinMotorDireccion = 8; //pin de dirección del driver IBT2 

void setup() {
  pinMode(pinPotenciometro, INPUT);
  pinMode(pinMotorPWM, OUTPUT);
  pinMode(pinMotorDireccion, OUTPUT);
}

void loop() {
  //Valor del potenciómetro
  int valorPotenciometro = analogRead(pinPotenciometro);
  
  //Mapea el valor del potenciómetro al rango de velocidad del motor
  int velocidadMotor = map(valorPotenciometro, 0, 1023, 0, 255);
  
  //Obtener la dirección del motor (horario o antihorario)
  int direccionMotor = (valorPotenciometro < 512) ? HIGH : LOW;
  
  //Controlar el motor
  analogWrite(pinMotorPWM, velocidadMotor);
  digitalWrite(pinMotorDireccion, direccionMotor);
}
