/*
 * Program 151: Function to add two numbers
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o function_add 151_function_add.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("add(8, 12) = %d\n", add(8, 12));
    return 0;
}
