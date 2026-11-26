/*
 * Program 103: Triangle of alphabets
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o alphabet_triangle 103_alphabet_triangle.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) printf("%c ", 'A' + j);
        printf("\n");
    }
    return 0;
}
