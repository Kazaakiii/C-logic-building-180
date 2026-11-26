/*
 * Program 074: Power of a number using a loop
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o power_without_pow 074_power_without_pow.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int base = 3, exp = 5;
    long long result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    printf("%d^%d = %lld\n", base, exp, result);
    return 0;
}
