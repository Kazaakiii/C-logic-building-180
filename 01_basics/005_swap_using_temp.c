/*
 * Program 005: Swap two numbers using a temporary variable
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o swap_using_temp 005_swap_using_temp.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 10, b = 25, temp;
    printf("Before: a=%d b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After : a=%d b=%d\n", a, b);
    return 0;
}
