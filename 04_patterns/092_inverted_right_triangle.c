/*
 * Program 092: Inverted right angled triangle
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o inverted_right_triangle 092_inverted_right_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
