/*
 * Program 065: Sum of digits of a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o sum_of_digits 065_sum_of_digits.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 98765, copy = n, sum = 0;
    while (copy > 0) {
        sum += copy % 10;
        copy /= 10;
    }
    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}
