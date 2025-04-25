// Define the pin connected to the LDR module's DO pin
const int ldrDOPin = 27; // Use any available GPIO pin (e.g., GPIO27)

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Configure the DO pin as input
  pinMode(ldrDOPin, INPUT);
}

void loop() {
  // Read the digital value from the LDR module's DO pin
  int lightState = digitalRead(ldrDOPin);

  // Print the result to the Serial Monitor
  if (lightState == HIGH) {
    Serial.println("Dark environment detected!"); // DO pin is HIGH when light is below threshold
  } else {
    Serial.println("Bright environment detected!"); // DO pin is LOW when light is above threshold
  }

  // Add a delay to avoid rapid updates
  delay(500);
}