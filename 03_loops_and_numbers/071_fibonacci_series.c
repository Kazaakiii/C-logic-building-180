/*
 * Program 071: First 15 Fibonacci numbers
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o fibonacci_series 071_fibonacci_series.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    long long a = 0, b = 1;
    for (int i = 0; i < 15; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
