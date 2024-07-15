#!/bin/bash

# needs one argument (name of library)
if [ $# -ne 1 ]; then
    echo "Usage: $0 <library name>"
    exit 1
fi

filename=$1  # First argument is the library name

# Check if file already exists
if [ -e "$filename.h" ]; then
    echo "File '$filename' already exists. Aborting."
    exit 1
fi

if [ -e "$filename.cpp" ]; then
    echo "File '$filename' already exists. Aborting."
    exit 1
fi

h_file_template=$(cat <<EOF
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
#ifndef $(echo $filename | tr '[:lower:]' '[:upper:]')_H
#define $(echo $filename | tr '[:lower:]' '[:upper:]')_H
/*  
*   declare your funcion headers or whatever you want
*   for example:
*       int sumu8(uint8_t first, uint8_t second);
*/
#endif
EOF
)

cpp_file_template=$(cat <<EOF
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
#include "$filename.h"
/*
 *  your own libraries from this directory
 *
 *  define your functions or whatever you want to do here
 */
EOF
)

# Write some text into the file
echo -e "$h_file_template" > "src/$filename.h"
echo -e "$cpp_file_template" > "src/$filename.cpp"

echo "File '$filename' created successfully."
