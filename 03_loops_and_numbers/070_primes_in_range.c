/*
 * Program 070: Prime numbers between 1 and 100
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o primes_in_range 070_primes_in_range.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("Primes from 1 to 100:\n");
    for (int n = 2; n <= 100; n++) {
        int prime = 1;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) { prime = 0; break; }
        if (prime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
