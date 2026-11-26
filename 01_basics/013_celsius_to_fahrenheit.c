/*
 * Program 013: Convert Celsius to Fahrenheit
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o celsius_to_fahrenheit 013_celsius_to_fahrenheit.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float c = 36.6f;
    printf("%.1f C = %.1f F\n", c, c * 9 / 5 + 32);
    return 0;
}
