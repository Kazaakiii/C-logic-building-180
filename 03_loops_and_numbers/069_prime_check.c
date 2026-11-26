/*
 * Program 069: Check whether a number is prime
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o prime_check 069_prime_check.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 29, is_prime = (n >= 2);
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { is_prime = 0; break; }
    }
    printf("%d is %s\n", n, is_prime ? "Prime" : "Not Prime");
    return 0;
}
