/*
 * Program 028: First and last digit of a number
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o first_and_last_digit 028_first_and_last_digit.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 7392;
    int last = n % 10;
    int first = n;
    while (first >= 10) first /= 10;
    printf("First digit = %d\nLast digit  = %d\n", first, last);
    return 0;
}
