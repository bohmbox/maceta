const int relayPin = 23; // GPIO23 connected to relay

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Ensure pump starts OFF
}

void loop() {
  // Example: Run pump for 5 seconds every minute
  digitalWrite(relayPin, HIGH); // Activate relay (pump ON)
  delay(5000); // Pump runs for 5 seconds
  digitalWrite(relayPin, LOW); // Deactivate relay (pump OFF)
  delay(55000); // Wait 55 seconds
}
