/*
 * Program 061: Sum of the first N natural numbers
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o sum_of_first_n 061_sum_of_first_n.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 100, sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    printf("Sum of 1 to %d = %d\n", n, sum);
    return 0;
}
