# Rediseño del robot manipulador móvil para navegación autónoma con la tarjeta Nvidia TX2

## Descripción del proyecto
Este proyecto tiene como objetivo realizar el rediseño del robot manipulador móvil para permitir la navegación autónoma. La tarjeta Nvidia TX2 será utilizada para el control del robot, permitiendo la generación de un modelo virtual del mismo.

## Cableado del banco de pruebas

Una vez teniendo los elementos que lleva el banco de pruebas (motores de corriente directa, Arduino uno, fuente de poder, protoboard, puente IBT 2) se realizó el cableado de los dichos elementos, quedando de la siguiente manera:

<img src="Alfredo Moreno/conexion banco pruebas.jpg" width="500"/>

Luego, se conectó la fuente de poder y uno de los motores al puente IBT 2.

<img src="Alfredo Moreno/Datasheet IBT.jpg" alt="Descripción de la imagen" width="500"/>

Posteriormente, se conectaron las señales de PWM del puente IBT 2 a la placa de Arduino uno, los pines 42 y 40 del puente se conectaron con los pines 8 y 9 del Arduino, el resto de las entradas se conectaron al GND del Arduino y a la corriente en la protoboard.

<img src="Alfredo Moreno/Datasheet arduino.jpg" alt="Descripción de la imagen" width="500"/>

<img src="Alfredo Moreno/conexion IBT y arduino.jpg" alt="Descripción de la imagen" width="500"/>

Por último, se colocó un potenciómetro para que se pudiera controlar la velocidad y dirección del motor de corriente directa. Para esto se colocó en la protoboard el potenciómetro y se conectaron sus terminales de la siguiente manera: la terminal 3 se conectó al GND del Arduino, la segunda terminal se conectó al pin A0 del Arduino, y finalmente la última terminal se conectó a la corriente en la protoboard.

<img src="Alfredo Moreno/Datasheet potenciometro.png" alt="Descripción de la imagen" width="500"/>

<img src="Alfredo Moreno/conexion arduino y potenciometro.jpg" alt="Descripción de la imagen" width="500"/>


