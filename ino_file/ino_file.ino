/*
* demo for 7 segment display
* connections:
*   [A-G]   ->  [2-8]
*   DP      ->  9
*   GND     ->  GND
*/

#ifndef DELETE_LIBS
#include <Arduino.h>
#endif

#include "sum.h"

#define A_PIN 2
#define B_PIN 3
#define C_PIN 4
#define D_PIN 5
#define E_PIN 6
#define F_PIN 7
#define G_PIN 8
#define DP_PIN 9

#define TOP A_PIN
#define BOTTOM D_PIN
#define MIDDLE G_PIN
#define TOP_LEFT B_PIN
#define TOP_RIGHT F_PIN
#define BOTTOM_LEFT C_PIN
#define BOTTOM_RIGHT E_PIN
#define DOT DP_PIN

void flash(uint8_t pin, uint16_t time);

void setup() {
    pinMode(A_PIN, OUTPUT);
    pinMode(B_PIN, OUTPUT);
    pinMode(C_PIN, OUTPUT);
    pinMode(D_PIN, OUTPUT);
    pinMode(E_PIN, OUTPUT);
    pinMode(F_PIN, OUTPUT);
    pinMode(G_PIN, OUTPUT);
    pinMode(DP_PIN, OUTPUT);
}


void loop() {
    flash(TOP, 100);
    flash(TOP_LEFT, 100);
    flash(MIDDLE, 100);
    flash(BOTTOM_RIGHT, 100);
    flash(BOTTOM, 100);
    flash(BOTTOM_LEFT, 100);
    flash(MIDDLE, 100);
    flash(TOP_RIGHT, 100);
    int number = sum(3, 5);
}


void flash(uint8_t pin, uint16_t time) {
    digitalWrite(pin, 1);
    delay(time);
    digitalWrite(pin, 0);
}
