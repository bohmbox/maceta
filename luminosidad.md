El código de este modulo es solamente boilerplate pero es justo lo que se necesita para tomar datos como punto de partida. 
El puerto serial se conecta en el rate baud 111950 or so

El sensor tiene 4 pines:
- AO: INPUT ANALOGICO. Lectura en tiempo real del sensor. el pin es GPIO32
- DO: Input digital (0,1) de un cierto umbral de resistencia ajustable con un potenciometro en el modulo, pin GPIO27
- VCC: 3,3V
- GND.