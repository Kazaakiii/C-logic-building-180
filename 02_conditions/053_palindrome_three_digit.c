/*
 * Program 053: Palindrome check for a three digit number
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o palindrome_three_digit 053_palindrome_three_digit.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 121;
    if (n / 100 == n % 10) printf("%d is a palindrome\n", n);
    else printf("%d is not a palindrome\n", n);
    return 0;
}
