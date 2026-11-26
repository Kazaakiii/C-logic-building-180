/*
 * Program 113: Right aligned triangle
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o right_aligned_triangle 113_right_aligned_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
