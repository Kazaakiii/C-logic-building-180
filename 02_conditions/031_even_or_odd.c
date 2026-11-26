/*
 * Program 031: Check whether a number is even or odd
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o even_or_odd 031_even_or_odd.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 17;
    if (n % 2 == 0) printf("%d is Even\n", n);
    else printf("%d is Odd\n", n);
    return 0;
}
