/*
 * Program 079: Convert binary to decimal
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o binary_to_decimal 079_binary_to_decimal.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    long long binary = 101101;
    long long copy = binary;
    int decimal = 0, base = 1;
    while (copy > 0) {
        decimal += (copy % 10) * base;
        base *= 2;
        copy /= 10;
    }
    printf("Binary %lld = Decimal %d\n", binary, decimal);
    return 0;
}
