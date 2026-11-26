/*
 * Program 108: Butterfly pattern
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o butterfly_pattern 108_butterfly_pattern.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int s = 1; s <= 2 * (n - i); s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int s = 1; s <= 2 * (n - i); s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
