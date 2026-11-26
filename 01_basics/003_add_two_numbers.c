/*
 * Program 003: Add two numbers
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o add_two_numbers 003_add_two_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 15, b = 27;
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
