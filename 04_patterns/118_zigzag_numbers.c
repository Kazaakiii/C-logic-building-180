/*
 * Program 118: Zigzag rows of numbers
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o zigzag_numbers 118_zigzag_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            for (int j = 1; j <= n; j++) printf("%d ", j);
        else
            for (int j = n; j >= 1; j--) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
