/*
 * Program 081: Convert decimal to octal
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o decimal_to_octal 081_decimal_to_octal.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 100, copy = n, digits[32], count = 0;
    while (copy > 0) {
        digits[count++] = copy % 8;
        copy /= 8;
    }
    printf("%d in octal = ", n);
    for (int i = count - 1; i >= 0; i--) printf("%d", digits[i]);
    printf("\n");
    return 0;
}
