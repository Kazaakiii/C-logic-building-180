/*
 * Program 096: Hollow square
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o hollow_square 096_hollow_square.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
