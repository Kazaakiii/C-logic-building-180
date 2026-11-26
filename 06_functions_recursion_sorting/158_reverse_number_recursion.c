/*
 * Program 158: Reverse a number using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o reverse_number_recursion 158_reverse_number_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int reverse(int n, int rev) {
    if (n == 0) return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main(void) {
    printf("Reverse of 12345 = %d\n", reverse(12345, 0));
    return 0;
}
