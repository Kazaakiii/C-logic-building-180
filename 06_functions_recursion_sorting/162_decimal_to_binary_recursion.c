/*
 * Program 162: Decimal to binary using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o decimal_to_binary_recursion 162_decimal_to_binary_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void to_binary(int n) {
    if (n > 1) to_binary(n / 2);
    printf("%d", n % 2);
}

int main(void) {
    printf("45 in binary = ");
    to_binary(45);
    printf("\n");
    return 0;
}
