/*
 * Program 083: Count set bits (1s) in a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o count_set_bits 083_count_set_bits.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    unsigned int n = 29, copy = n, count = 0;
    while (copy) {
        count += copy & 1;
        copy >>= 1;
    }
    printf("%u has %u set bits\n", n, count);
    return 0;
}
