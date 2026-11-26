/*
 * Program 140: Convert a string to uppercase manually
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o lowercase_to_uppercase 140_lowercase_to_uppercase.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "logic Building 101";
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
    printf("Uppercase: %s\n", s);
    return 0;
}
