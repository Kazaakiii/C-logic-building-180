/*
 * Program 086: Sum of squares of the first N numbers
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o sum_of_squares 086_sum_of_squares.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 10, sum = 0;
    for (int i = 1; i <= n; i++) sum += i * i;
    printf("1^2 + 2^2 + ... + %d^2 = %d\n", n, sum);
    return 0;
}
