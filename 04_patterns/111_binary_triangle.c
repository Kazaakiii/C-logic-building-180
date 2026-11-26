/*
 * Program 111: Triangle of alternating 1 and 0
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o binary_triangle 111_binary_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", (i + j) % 2);
        printf("\n");
    }
    return 0;
}
