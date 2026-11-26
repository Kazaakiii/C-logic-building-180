/*
 * Program 064: Count digits in a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o count_digits 064_count_digits.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 123456, copy = n, count = 0;
    do {
        count++;
        copy /= 10;
    } while (copy != 0);
    printf("%d has %d digits\n", n, count);
    return 0;
}
