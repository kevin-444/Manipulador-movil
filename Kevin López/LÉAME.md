# Manipulador Móvil 

Lo primero que se realizó, fue la toma de medidas de la tarjeta Nvidia TX2
•Base negra cuadrada 177 mm  

•Tornillos dorados 3 mm
•Altura con disipador 60 mm
•Altura sin disipador 16 mm
•Gomas de la base 6 mm

<img src="/Kevin%20Lopez/Tarjeta.jpeg" alt="Descripción de la imagen" width="500"/>

Para realizar el banco de pruebas fue requerido
•Motores DC
•Arduino uno
•Fuente 5V
•Driver IBT2
•Protoboard
•Potenciómetro
•Base MDF

## Driver IBT2
| RPWM   | LPWM  | Direction |
|--------|-------|-----------|
| PWM    | LOW   | Forward   |
| LOW    | PWM   | Reverse   |

<img src="/Kevin%20Lopez/Datos_IBT2.jpg" alt="Descripción de la imagen" width="500"/>

Se realizaron las conexiones pertinentes entre el driver y el Arduino

| IBT2   | Arduino | 
|--------|---------|
| VCC    | 5V      | 
| R_EN   | 5V      | 
| L_EN   | 5V      |
| LPWM   | 8       |
| RPEM   | 9       |

Se utilizo el potenciómetro para controlar la velocidad y el sentido de giro del motor
•Terminal 1 del potenciómetro se conecto a la corriente en la protoboard
•Terminal 2 del potenciómetro se conecto al pin A0 del Arduino
•Terminal 3 del potenciómetro se conecto al GND del Arduino

<img src="/Kevin%20Lopez/Banco de pruebas.jpeg" alt="Descripción de la imagen" width="500"/>

Se acomodaron los componentes de tal manera que se tenga espacio para poder cambiar la conexión del motor a probar
Se imprimirán en 3D, bases para fijar la fuente, el driver y la protoboard con el Arduino

Primero se probaron los motores con el código que viene en el video de “Guia de control de motores”
https://www.youtube.com/watch?v=ygrsIqWOh3Y&t=1278s

Finalmente se hizo un código para controlar la velocidad y el sentido de giro del motor con el potenciómetro


