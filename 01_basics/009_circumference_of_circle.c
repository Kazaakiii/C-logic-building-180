/*
 * Program 009: Circumference of a circle
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o circumference_of_circle 009_circumference_of_circle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double r = 7.0;
    printf("Circumference = %.2f\n", 2 * PI * r);
    return 0;
}
