/*
 * Program 004: All basic arithmetic operations on two numbers
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o arithmetic_operations 004_arithmetic_operations.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 20, b = 6;
    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %.2f\n", (float)a / b);
    printf("Remainder      : %d\n", a % b);
    return 0;
}
