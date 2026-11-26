/*
 * Program 138: Palindrome string check
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o palindrome_string 138_palindrome_string.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "madam";
    int n = strlen(s), is_pal = 1;
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i]) { is_pal = 0; break; }
    printf("\"%s\" is %s\n", s, is_pal ? "a palindrome" : "not a palindrome");
    return 0;
}
