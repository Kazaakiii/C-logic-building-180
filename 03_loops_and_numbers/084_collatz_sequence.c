/*
 * Program 084: Collatz sequence of a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o collatz_sequence 084_collatz_sequence.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    long long n = 27;
    int steps = 0;
    printf("Collatz of %lld: %lld", n, n);
    while (n != 1) {
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
        steps++;
        if (steps <= 10) printf(" -> %lld", n);
    }
    printf(" ...\nReached 1 after %d steps\n", steps);
    return 0;
}
