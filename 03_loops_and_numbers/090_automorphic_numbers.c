/*
 * Program 090: Automorphic numbers up to 1000
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o automorphic_numbers 090_automorphic_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("Automorphic numbers up to 1000:\n");
    for (int n = 1; n <= 1000; n++) {
        long sq = (long)n * n;
        int t = n, ok = 1;
        while (t > 0) {
            if (sq % 10 != t % 10) { ok = 0; break; }
            sq /= 10;
            t /= 10;
        }
        if (ok) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
