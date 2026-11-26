/*
 * Program 110: Checkerboard
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o checkerboard_pattern 110_checkerboard_pattern.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 8;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf((i + j) % 2 == 0 ? "# " : ". ");
        printf("\n");
    }
    return 0;
}
