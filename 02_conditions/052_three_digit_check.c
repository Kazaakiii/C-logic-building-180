/*
 * Program 052: Check if a number has exactly three digits
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o three_digit_check 052_three_digit_check.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 456;
    int a = n < 0 ? -n : n;
    if (a >= 100 && a <= 999) printf("%d is a three digit number\n", n);
    else printf("%d is not a three digit number\n", n);
    return 0;
}
