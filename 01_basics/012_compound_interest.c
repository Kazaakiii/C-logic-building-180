/*
 * Program 012: Compound interest
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o compound_interest 012_compound_interest.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double p = 10000, r = 5, t = 3;
    double amount = p * pow(1 + r / 100, t);
    printf("Amount = %.2f\nCompound Interest = %.2f\n", amount, amount - p);
    return 0;
}
