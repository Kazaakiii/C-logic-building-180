/*
 * Program 099: Triangle of increasing numbers
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o number_triangle 099_number_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
