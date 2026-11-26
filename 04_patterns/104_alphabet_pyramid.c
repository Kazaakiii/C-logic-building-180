/*
 * Program 104: Pyramid of alphabets
 * Topic  : Star, number and alphabet patterns
 * Build  : gcc -Wall -o alphabet_pyramid 104_alphabet_pyramid.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++) printf(" ");
        for (int j = 0; j <= i; j++) printf("%c", 'A' + j);
        for (int j = i - 1; j >= 0; j--) printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}
