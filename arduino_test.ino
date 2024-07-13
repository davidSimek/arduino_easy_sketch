
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);  // Set the built-in LED pin as an output
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);  // Turn on the LED
    delay(1000);  // Wait for 1 second
    digitalWrite(LED_BUILTIN, LOW);   // Turn off the LED
    delay(1000);  // Wait for 1 second
}

