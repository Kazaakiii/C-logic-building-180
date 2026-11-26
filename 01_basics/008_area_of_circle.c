/*
 * Program 008: Area of a circle
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o area_of_circle 008_area_of_circle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double r = 7.0;
    printf("Area of circle with radius %.1f = %.2f\n", r, PI * r * r);
    return 0;
}
