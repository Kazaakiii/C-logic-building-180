/*
 * Program 115: Plus pattern
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o plus_pattern 115_plus_pattern.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 7, mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf((i == mid || j == mid) ? "*" : " ");
        printf("\n");
    }
    return 0;
}
