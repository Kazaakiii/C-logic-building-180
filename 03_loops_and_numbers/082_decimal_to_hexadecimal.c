/*
 * Program 082: Convert decimal to hexadecimal
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o decimal_to_hexadecimal 082_decimal_to_hexadecimal.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 255, copy = n, count = 0;
    char hex[32];
    const char *symbols = "0123456789ABCDEF";
    while (copy > 0) {
        hex[count++] = symbols[copy % 16];
        copy /= 16;
    }
    printf("%d in hexadecimal = ", n);
    for (int i = count - 1; i >= 0; i--) putchar(hex[i]);
    printf("\n");
    return 0;
}
