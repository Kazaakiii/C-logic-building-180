/*
 * Program 022: Square and cube of a number
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o square_and_cube 022_square_and_cube.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 7;
    printf("Square of %d = %d\n", n, n * n);
    printf("Cube of %d   = %d\n", n, n * n * n);
    return 0;
}
