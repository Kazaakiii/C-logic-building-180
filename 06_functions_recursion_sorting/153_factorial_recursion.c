/*
 * Program 153: Factorial using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o factorial_recursion 153_factorial_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

unsigned long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(void) {
    printf("10! = %llu\n", fact(10));
    return 0;
}
