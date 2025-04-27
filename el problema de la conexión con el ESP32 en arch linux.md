## Descripción del problema
Esto pasó en mi sistema:
- la situación de el ESP32 es que requiere un chip  intermedio para poder conectarse via USB. 
- Hay dos tipos de drivers, dependiendo del chip que traiga integrada la placa: CP210x ó CH340.
- En el caso de mi placa, trae el chip CP210x USBtoUART driver. 


## Cómo lo solucioné
- El grupo al que hay que añadirse como usuario es uucp.
- comunicación serial  (uucp means unix to unix copy).
En linux moderno, el protocolo está encapsulado en el concepto de grupo que es el que da permisos a dispositivos seriales (como el chip USB to UART en placas ESP32 )

Añadiendose al grupo se arregla
```
sudo usermod -aG uucp $USER

# Verify with
groups  # Check if "uucp" appears in the list
ls -l /dev/ttyUSB*  # Confirm the group of your ESP32's port
```

The ESP32's USB to serial chip (CP210x) appears as a serial device 
/dev/ttyUSB0
