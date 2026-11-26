/*
 * Program 080: Convert decimal to binary
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o decimal_to_binary 080_decimal_to_binary.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 45, copy = n, bits[32], count = 0;
    if (n == 0) bits[count++] = 0;
    while (copy > 0) {
        bits[count++] = copy % 2;
        copy /= 2;
    }
    printf("%d in binary = ", n);
    for (int i = count - 1; i >= 0; i--) printf("%d", bits[i]);
    printf("\n");
    return 0;
}
