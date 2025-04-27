// Define the pin connected to the LDR module's AO pin
const int ldrPin = 32;  // Use GPIO34 for analog input

void setup() {
  // Initialize Serial Monitor for debugging
  Serial.begin(115200);

  // Configure the ADC pin
  pinMode(ldrPin, INPUT);
}

void loop() {
  // Read the analog value from the LDR module
  int ldrValue = analogRead(ldrPin);

  // Print the raw analog value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  int brightness = map(ldrValue, 0, 4095, 0, 100);
  Serial.print("Brightness (%): ");
  Serial.println(brightness);
  if (ldrValue < 2000) {  // Example threshold
    Serial.println("Bright Environment");
  } else {
    Serial.println("Dark Environment");
  }
  // Add a delay to avoid flooding the Serial Monitor
  delay(3000);
}