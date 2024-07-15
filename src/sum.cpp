#ifndef DELETE_LIBS
// This condition makes it possible for compiler to ignore libraries it already has access to.
#include <Arduino.h>
/*
*   add your installed libraries used to controll external devices
*   these have to be installed using arduino-cli
*   find help in README.md. (in future)
*   for example:
*       #include <esp32/some_module.h>
*/
#endif
#include "sum.h"
/*
 *  your own libraries from this directory
 *
 *  define your functions or whatever you want to do here
 */
int sum(int a, int b) {
    return a + b;
}
