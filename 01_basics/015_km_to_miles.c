/*
 * Program 015: Convert kilometres to miles
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o km_to_miles 015_km_to_miles.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double km = 42.195;
    printf("%.3f km = %.3f miles\n", km, km * 0.621371);
    return 0;
}
