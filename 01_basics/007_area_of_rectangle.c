/*
 * Program 007: Area and perimeter of a rectangle
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o area_of_rectangle 007_area_of_rectangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float length = 12.5f, width = 4.0f;
    printf("Area      = %.2f\n", length * width);
    printf("Perimeter = %.2f\n", 2 * (length + width));
    return 0;
}
