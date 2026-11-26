/*
 * Program 067: Palindrome number check
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o palindrome_number 067_palindrome_number.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 12321, copy = n, rev = 0;
    while (copy > 0) {
        rev = rev * 10 + copy % 10;
        copy /= 10;
    }
    if (rev == n) printf("%d is a palindrome\n", n);
    else printf("%d is not a palindrome\n", n);
    return 0;
}
