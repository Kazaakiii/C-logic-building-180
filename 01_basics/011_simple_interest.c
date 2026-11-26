/*
 * Program 011: Simple interest
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o simple_interest 011_simple_interest.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float p = 10000, r = 5, t = 3;
    printf("Simple Interest = %.2f\n", (p * r * t) / 100);
    return 0;
}
