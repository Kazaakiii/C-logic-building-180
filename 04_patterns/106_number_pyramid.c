/*
 * Program 106: Number pyramid (1 2 3 2 1)
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o number_pyramid 106_number_pyramid.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d", j);
        for (int j = i - 1; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
