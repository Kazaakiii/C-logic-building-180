/*
 * Program 072: GCD using the Euclidean algorithm
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o gcd_of_two_numbers 072_gcd_of_two_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 48, b = 18, x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    printf("GCD of %d and %d = %d\n", a, b, x);
    return 0;
}
