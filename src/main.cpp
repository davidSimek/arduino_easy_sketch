#define F_CPU 16000000L
#define ARDUINO 10607
#define ARDUINO_AVR_UNO
#define ARDUINO_ARCH_AVR

#ifndef DELETE_LIBS

//these are there to fool lsp, ! don't touch, they will be removed in compile time
#include "fool.h"
#endif


// Define constants
const int analogInPin = A0; // Analog input pin connected to potentiometer
const int ledPin = 13;      // LED connected to digital pin 13
const int analogThreshold = 512; // Threshold for analog input

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set digital pin 13 as an output
  DDRB |= (1 << DDB5); // DDRB is Data Direction Register for Port B, DDB5 is pin 13

  // Initialize ADC (Analog-to-Digital Converter)
  // Set reference voltage to AVcc (5V), adjust ADC clock to 125kHz
  ADMUX = (1 << REFS0); // AVcc with external capacitor at AREF pin
  ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1); // Enable ADC, prescaler = 64 (125kHz)

  // Disable digital input on analog pin to reduce power consumption
  DIDR0 |= (1 << ADC0D); // Disable digital input buffer on ADC0 pin (A0)
}

void loop() {
  // Read analog input from potentiometer
  int analogValue = analogRead(analogInPin);

  // Perform some computation
  int scaledValue = map(analogValue, 0, 1023, 0, 255); // Scale analog value to 0-255 range

  // Control an LED based on the computed value
  if (scaledValue > analogThreshold) {
    PORTB |= (1 << PORTB5); // Turn on LED (digital pin 13)
  } else {
    PORTB &= ~(1 << PORTB5); // Turn off LED
  }

  // Send the computed value over serial communication
  Serial.print("Analog Input: ");
  Serial.print(analogValue);
  Serial.print(" | Scaled Value: ");
  Serial.println(scaledValue);

  // Delay for a short period
  _delay_ms(100); // Delay for 100 milliseconds
}
