/*
 * Program 026: Swap the digits of a two digit number
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o swap_digits_of_two_digit_number 026_swap_digits_of_two_digit_number.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 47;
    int swapped = (n % 10) * 10 + n / 10;
    printf("%d -> %d\n", n, swapped);
    return 0;
}
