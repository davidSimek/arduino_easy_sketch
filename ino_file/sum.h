#ifndef DELETE_LIBS
// This condition makes it possible for compiler to ignore libraries it already has access to.
#include <Arduino.h>
/*
*   add your installed libraries used to controll external devices
*   these have to be installed using arduino-cli.
*   find help in README.md. (in future)
*   for example:
*       #include <esp32/some_module.h>
*/
#endif
/*
*   define your preprocessor macros
*   for example:
*       #define SCREEN_RESOLUTION_X 200
*       #define SCREEN_RESOLUTION_Y 160
*/
#ifndef SUM_H
#define SUM_H
/*  
*   declare your funcion headers or whatever you want
*   for example:
*       int sumu8(uint8_t first, uint8_t second);
*/
int sum(int a, int b);
#endif
