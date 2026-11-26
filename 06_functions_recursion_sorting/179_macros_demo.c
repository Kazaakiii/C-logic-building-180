/*
 * Program 179: Macros with parameters
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o macros_demo 179_macros_demo.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PI 3.14159

int main(void) {
    printf("SQUARE(7)   = %d\n", SQUARE(7));
    printf("MAX(12, 30) = %d\n", MAX(12, 30));
    printf("Circle area (r=2) = %.2f\n", PI * SQUARE(2));
    return 0;
}
