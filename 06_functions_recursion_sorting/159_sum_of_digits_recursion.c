/*
 * Program 159: Sum of digits using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o sum_of_digits_recursion 159_sum_of_digits_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int digit_sum(int n) {
    if (n == 0) return 0;
    return n % 10 + digit_sum(n / 10);
}

int main(void) {
    printf("Sum of digits of 98765 = %d\n", digit_sum(98765));
    return 0;
}
