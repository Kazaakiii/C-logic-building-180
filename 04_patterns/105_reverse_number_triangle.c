/*
 * Program 105: Inverted triangle of numbers
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o reverse_number_triangle 105_reverse_number_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
