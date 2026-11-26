/*
 * Program 024: Hypotenuse of a right triangle
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o hypotenuse 024_hypotenuse.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double a = 3, b = 4;
    printf("Hypotenuse = %.2f\n", sqrt(a * a + b * b));
    return 0;
}
