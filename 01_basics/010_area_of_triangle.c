/*
 * Program 010: Area of a triangle from base and height
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o area_of_triangle 010_area_of_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float base = 10, height = 6;
    printf("Area = %.2f\n", 0.5f * base * height);
    return 0;
}
