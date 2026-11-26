/*
 * Program 027: Sum of digits of a three digit number
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o sum_of_digits_three_digit 027_sum_of_digits_three_digit.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 482;
    int sum = n / 100 + (n / 10) % 10 + n % 10;
    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}
