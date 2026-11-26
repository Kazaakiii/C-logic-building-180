/*
 * Program 063: Multiplication table
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o multiplication_table 063_multiplication_table.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 7;
    for (int i = 1; i <= 10; i++) printf("%d x %2d = %d\n", n, i, n * i);
    return 0;
}
