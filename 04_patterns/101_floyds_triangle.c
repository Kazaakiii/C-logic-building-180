/*
 * Program 101: Floyd's triangle
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o floyds_triangle 101_floyds_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5, num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%3d", num++);
        printf("\n");
    }
    return 0;
}
