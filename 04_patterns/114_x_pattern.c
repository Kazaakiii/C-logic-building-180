/*
 * Program 114: X pattern
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o x_pattern 114_x_pattern.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 7;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf((i == j || i + j == n - 1) ? "*" : " ");
        printf("\n");
    }
    return 0;
}
