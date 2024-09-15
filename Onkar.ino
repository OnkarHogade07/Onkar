// Define the LED pin (You can change the pin number if your LED is connected to a different GPIO)
int ledPin = 2;  // Most ESP32 boards have an onboard LED connected to GPIO 2

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  
  // Wait for 1 second
  delay(1000); 
  
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW); 
<<<<<<< Updated upstream
=======
  digitalWrite(ledPin,High);
  digitalWrite(ledPin,Low);
  digitalWrite(ledPin,High);
>>>>>>> Stashed changes
  
  // Wait for 1 second
  delay(1000);
  delay(2000);
  delay(3000);
}
