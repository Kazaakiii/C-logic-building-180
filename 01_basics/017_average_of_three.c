/*
 * Program 017: Average of three numbers
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o average_of_three 017_average_of_three.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float a = 70, b = 85, c = 92;
    printf("Average = %.2f\n", (a + b + c) / 3);
    return 0;
}
