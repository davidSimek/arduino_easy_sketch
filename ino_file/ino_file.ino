#include <stdint.h>
#ifndef DELETE_LIBS
#include <Arduino.h>
#endif

#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

#define TOP A
#define BOTTOM D
#define MIDDLE G
#define TOP_LEFT B
#define TOP_RIGHT F
#define BOTTOM_LEFT C
#define BOTTOM_RIGHT E
#define DOT DP

void flash(uint8_t pin, uint16_t time);

void setup() {
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(DP, OUTPUT);
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
}


void flash(uint8_t pin, uint16_t time) {
    digitalWrite(pin, 1);
    delay(time);
    digitalWrite(pin, 0);
}
