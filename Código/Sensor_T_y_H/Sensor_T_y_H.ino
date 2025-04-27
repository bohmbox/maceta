#include <WiFi.h>
#include <ThingSpeak.h>
#include <DHT.h>

#define DHT_PIN 21
#define LDR_PIN 33

const char* ssid= "INFINITUM8B31";
const char* pass = "SzELAh5mt3";

unsigned long idch = 2901429;
const char* Wapikey = "SEW4IK5RMINOGQRL";

WiFiClient Client;
DHT dht1 (DHT_PIN,DHT11);

void setup() {
  //put your setup code here, to run once: 
  Serial.begin(9600);
  Serial.println("Prueba del sensor");
  dht1.begin();
  WiFi.begin(ssid,pass);
  delay(20000);
  Serial.println("WiFi Activo");
  ThingSpeak.begin(Client);
}

void loop() {
  //put your main code here, to run repeatedly;
  float t = dht1.readTemperature();
  float h = dht1.readHumidity();
  int ldrValue = analogRead(LDR_PIN);

  while (isnan(t) || isnan(h)) {
    Serial.println("Falla sensor DHT11...");
    delay(2000);
    t = dht1.readTemperature();
    h = dht1.readHumidity();
  }
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" °C.");

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.println(" $.");

  Serial.print("Intensidad de luz: ");
  Serial.print(ldrValue);
  Serial.println("(valor analógico)");

  Serial.println("......................................");
  ThingSpeak.setField (1,t);
  ThingSpeak.setField (2,h);
  ThingSpeak.setField (3,ldrValue);
  ThingSpeak.writeFields(idch,Wapikey);
  Serial.println("Enviados");
  delay(14000);
}
