/*
 * Program 155: Sum of N numbers using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o sum_of_natural_recursion 155_sum_of_natural_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main(void) {
    printf("Sum of 1 to 50 = %d\n", sum(50));
    return 0;
}
