#include <stdio.h>
#include <float.h>

// Constant definition
#define PI 3.14

int main() {
    // Printing to console
    printf("Hello, World!\n");
    printf("The approximate value of pi is %f!\n", PI);

    /* Types */
    // Basic types (integer & floating point types)
    char character = 'a';           // char (-128 to 127 OR 0 to 255)
    // char unicode = '\u02C0';
    unsigned char uc = 'b';         // unsigned char (0 to 255)
    signed char sc = 'c';           // signed char (-128 to 127)
    int i = -5;                     // int (-32768 to 32767)
    unsigned int ui = 5;            // unsigned int (0 to 65535)
    short s = 32767;                // short (-32768 to 32767)
    unsigned short us = 65535;      // unsigned short (0 to 65535)
    long l = 2147483647;            // long (-2147483648 to 2147483647)
    unsigned long ul = 4294967295;  // unsigned long (0 to 4294967295)

    float height_m = 1.7;           // float (1.2E-38 to 3.4E+38; 6dp precision)
    double d = 4.242352525;         // double (2.3E-308 to 1.7E+308; 15dp precision)
    long double ld = 4.2342342;     // long double (3.4E-4932 to 1.1E+4932; 19dp precision)

    // Printing using format specifiers (read more here: https://www.w3schools.in/c-programming/format-specifiers)
    printf("I am %f meters tall and I have %u friends.\n", height_m, ui);

    // Enumerated types

    // Void

    // Derived types

    // Aggregate types (arrays, structures)
    
    return 0;
}