/*
 * Program 137: Reverse a string
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o reverse_string 137_reverse_string.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "programming";
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        char t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }
    printf("Reversed: %s\n", s);
    return 0;
}
