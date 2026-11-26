/*
 * Program 088: Series e^x = 1 + x + x^2/2! + ...
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o series_sum_e_to_x 088_series_sum_e_to_x.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double x = 1.0, term = 1.0, sum = 1.0;
    for (int i = 1; i <= 15; i++) {
        term = term * x / i;
        sum += term;
    }
    printf("e^%.1f ~= %.8f (library: %.8f)\n", x, sum, exp(x));
    return 0;
}
