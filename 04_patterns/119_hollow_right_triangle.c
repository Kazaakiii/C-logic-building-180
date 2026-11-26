/*
 * Program 119: Hollow right angled triangle
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o hollow_right_triangle 119_hollow_right_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 6;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
