/*
 * Program 006: Swap two numbers without a temporary variable
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o swap_without_temp 006_swap_without_temp.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 10, b = 25;
    printf("Before: a=%d b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After : a=%d b=%d\n", a, b);
    return 0;
}
