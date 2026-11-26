/*
 * Program 021: Quotient and remainder of integer division
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o integer_division_modulus 021_integer_division_modulus.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int dividend = 47, divisor = 5;
    printf("Quotient  = %d\n", dividend / divisor);
    printf("Remainder = %d\n", dividend % divisor);
    return 0;
}
