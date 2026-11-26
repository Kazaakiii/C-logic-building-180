/*
 * Program 062: Factorial of a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o factorial 062_factorial.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 10;
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}
