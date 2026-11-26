/*
 * Program 023: Volume of a cylinder
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o volume_of_cylinder 023_volume_of_cylinder.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double r = 3.5, h = 10;
    printf("Volume = %.2f\n", PI * r * r * h);
    return 0;
}
