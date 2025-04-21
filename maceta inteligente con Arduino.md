Una maceta inteligente para atender el bienestar de la planta. 

Para un proyecto centrado en el bienestar de una planta utilizando un microcontrolador ESP32, es fundamental considerar sensores y actuadores que monitoreen y controlen las variables ambientales clave para el crecimiento saludable de la planta. A continuación, se detalla una lista de sensores y actuadores recomendados, junto con su justificación:


La comunicación del microcontrolador a traveś de un módulo bluethooth en tiempo real y de bajo consumo (BLE)

TABLA DE COMPONENTES SELECCIONADOS

COMPONENTE | DESCRIPCION | TIPO | CODIGO | 


Lista de componentes seleccionados:
- **[[Sensores seleccionados]]**
		- [[luminosidad]]
		- humedad del suelo
		- humedad del aire
		- temperatura
- **[[Actuadores]]**
- **[[Complementos Adicionales]]**

Vamos a considerar las restricciones de los puertos del microcontrolador. Esto significa que tenemos que definir los puertos y si se puede hacer en un solo microcontrolador o si podemos conectar varios controladores juntos. 

### **Diagrama General del Sistema**

1. **Entradas (Sensores)**:
   - Humedad del suelo → Control de riego.
   - Luz → Control de LEDs de crecimiento.
   - Temperatura/Humedad → Control de ventilador o calefactor.
   - pH y EC → Monitoreo de nutrientes y ajustes manuales.

2. **Procesamiento**:
   - ESP32 recopila datos de los sensores y toma decisiones basadas en umbrales predefinidos.

3. **Salidas (Actuadores)**:
   - Bomba de agua → Riego automatizado.
   - LEDs → Iluminación artificial.
   - Ventilador/Calefactor → Control de temperatura y humedad.
   - Humidificador → Ajuste de humedad del aire.

---

### **Consideraciones Finales**

- **Programación**: Utiliza Arduino IDE o MicroPython para programar el ESP32. Implementa lógica de control basada en umbrales específicos para cada variable.
- **Energía**: Asegúrate de que la fuente de alimentación sea adecuada para todos los componentes, especialmente para actuadores como bombas y ventiladores.
- **Escalabilidad**: Diseña el sistema para que pueda expandirse fácilmente (por ejemplo, agregar más sensores o actuadores en el futuro).

---

### **Conclusión**

Un sistema bien diseñado para el bienestar de una planta debe incluir **sensores para medir variables críticas** (humedad del suelo, luz, temperatura, humedad del aire, pH y EC) y **actuadores para controlar el entorno** (bomba de agua, ventilador, LEDs, humidificador, calefactor). El ESP32 es ideal para este tipo de proyectos debido a su capacidad de procesamiento, conectividad Wi-Fi/Bluetooth y bajo consumo de energía.

**Respuesta final:**
Los sensores recomendados son: humedad del suelo, luz, temperatura/humedad del aire, pH del suelo y conductividad eléctrica. Los actuadores recomendados son: bomba de agua, ventilador, LEDs de crecimiento, humidificador y calefactor.


