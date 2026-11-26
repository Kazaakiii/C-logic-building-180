/*
 * Program 014: Convert Fahrenheit to Celsius
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o fahrenheit_to_celsius 014_fahrenheit_to_celsius.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float f = 98.6f;
    printf("%.1f F = %.1f C\n", f, (f - 32) * 5 / 9);
    return 0;
}
