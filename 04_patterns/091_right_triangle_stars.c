/*
 * Program 091: Right angled triangle of stars
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o right_triangle_stars 091_right_triangle_stars.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
