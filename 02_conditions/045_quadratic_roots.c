/*
 * Program 045: Roots of a quadratic equation
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o quadratic_roots 045_quadratic_roots.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double a = 1, b = -3, c = 2;
    double d = b * b - 4 * a * c;
    if (d > 0) {
        printf("Real and different roots: %.2f and %.2f\n",
               (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    } else if (d == 0) {
        printf("Real and equal roots: %.2f\n", -b / (2 * a));
    } else {
        printf("Complex roots: %.2f +/- %.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
    }
    return 0;
}
