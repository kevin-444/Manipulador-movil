# Manipulador Móvil 

Lo primero que se realizó, fue la toma de medidas de la tarjeta Nvidia TX2 <br> <br>
•Base negra cuadrada 177 mm  <br>
•Tornillos dorados 3 mm <br>
•Altura con disipador 60 mm <br>
•Altura sin disipador 16 mm <br>
•Gomas de la base 6 mm <br>

<img src="/Kevin%20Lopez/Tarjeta.jpeg" alt="Descripción de la imagen" width="500"/>


Para realizar el banco de pruebas fue requerido <br> <br>
•Motores DC <br> 
•Arduino uno <br>
•Fuente 5V <br>
•Driver IBT2 <br>
•Protoboard <br>
•Potenciómetro <br>
•Base MDF <br>

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

Se utilizo el potenciómetro para controlar la velocidad y el sentido de giro del motor <br>
•Terminal 1 del potenciómetro se conecto a la corriente en la protoboard <br>
•Terminal 2 del potenciómetro se conecto al pin A0 del Arduino <br>
•Terminal 3 del potenciómetro se conecto al GND del Arduino <br>

<img src="/Kevin%20Lopez/Banco de pruebas.jpeg" alt="Descripción de la imagen" width="500"/>

Se acomodaron los componentes de tal manera que se tenga espacio para poder cambiar la conexión del motor a probar
Se imprimirán en 3D, bases para fijar la fuente, el driver y la protoboard con el Arduino <br>

Primero se probaron los motores con el código que viene en el video de “Guia de control de motores”
https://www.youtube.com/watch?v=ygrsIqWOh3Y&t=1278s <br>

Finalmente se hizo un código para controlar la velocidad y el sentido de giro del motor con el potenciómetro


