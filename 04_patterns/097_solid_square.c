/*
 * Program 097: Solid square
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o solid_square 097_solid_square.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
