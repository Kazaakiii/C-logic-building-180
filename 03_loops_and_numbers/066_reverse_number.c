/*
 * Program 066: Reverse a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o reverse_number 066_reverse_number.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 12345, copy = n, rev = 0;
    while (copy > 0) {
        rev = rev * 10 + copy % 10;
        copy /= 10;
    }
    printf("Reverse of %d = %d\n", n, rev);
    return 0;
}
