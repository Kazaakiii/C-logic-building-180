/*
 * Program 102: Pascal's triangle
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o pascals_triangle 102_pascals_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 6;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < (n - i - 1) * 2; s++) printf(" ");
        int c = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
