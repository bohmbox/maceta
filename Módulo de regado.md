### **Componentes:**
1. **[[Bomba de agua]] (Mini Bomba Peristáltica o Submersible)**
   - **Propósito**: Automatizar el riego cuando el sensor de humedad del suelo indique niveles bajos.
   - **Importancia**: Garantiza que la planta reciba agua en el momento adecuado sin riesgo de sobre-riego.
   - **Conexión**: Controlada mediante un relé conectado al ESP32.

2. **Módulo Relé**
   - **Propósito**: Controlar los actuadores (bomba, ventilador, LEDs, etc.) desde el ESP32.
   - **Importancia**: Permite encender o apagar dispositivos según las mediciones de los sensores.
---
### **Conexión**
Software-wise, the ESP32 needs to control the GPIO pin connected to the relay. When the pin is set high, the transistor conducts, energizing the relay coil, closing the NO contact, and allowing current to flow to the pump. When the pin is low, the relay opens, stopping the pump.

### Wiring:
1. Connect the ESP32's 5V pin to the relay module's VCC.
2. Connect the ESP32's GND to the relay module's GND.
3. Connect the ESP32 GPIO pin (e.g., GPIO23) to the relay module's IN (control pin).
4. Connect the 12V pump to the relay's NO (Normally Open) and COM (Common) terminals.

Power the pump via the 12V supply.
