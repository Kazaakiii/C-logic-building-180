/*
 * Program 171: Pointer basics: address and value
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o pointer_basics 171_pointer_basics.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int x = 42;
    int *p = &x;
    printf("Value of x       = %d\n", x);
    printf("Value via *p     = %d\n", *p);
    *p = 99;
    printf("x after *p = 99  = %d\n", x);
    return 0;
}
