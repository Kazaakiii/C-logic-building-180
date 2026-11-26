/*
 * Program 087: Sum of the harmonic series
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o harmonic_series 087_harmonic_series.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 10;
    double sum = 0;
    for (int i = 1; i <= n; i++) sum += 1.0 / i;
    printf("1 + 1/2 + ... + 1/%d = %.6f\n", n, sum);
    return 0;
}
