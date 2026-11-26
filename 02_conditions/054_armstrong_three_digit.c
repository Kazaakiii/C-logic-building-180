/*
 * Program 054: Armstrong check for a three digit number
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o armstrong_three_digit 054_armstrong_three_digit.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 153;
    int a = n / 100, b = (n / 10) % 10, c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n) printf("%d is an Armstrong number\n", n);
    else printf("%d is not an Armstrong number\n", n);
    return 0;
}
