/*
 * Program 152: Prime check using a function
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o function_is_prime 152_function_is_prime.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    for (int n = 1; n <= 20; n++)
        if (is_prime(n)) printf("%d ", n);
    printf("\n");
    return 0;
}
