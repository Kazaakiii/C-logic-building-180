/*
 * Program 077: Sum of even and odd numbers up to N
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o sum_of_even_and_odd 077_sum_of_even_and_odd.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 50, even = 0, odd = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) even += i;
        else odd += i;
    }
    printf("Sum of even = %d\nSum of odd  = %d\n", even, odd);
    return 0;
}
