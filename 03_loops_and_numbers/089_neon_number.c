/*
 * Program 089: Neon numbers up to 10000
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o neon_number 089_neon_number.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("Neon numbers up to 10000:\n");
    for (int n = 0; n <= 10000; n++) {
        int sq = n * n, sum = 0;
        while (sq > 0) { sum += sq % 10; sq /= 10; }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
