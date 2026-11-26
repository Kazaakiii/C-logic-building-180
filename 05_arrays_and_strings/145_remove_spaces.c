/*
 * Program 145: Remove all spaces from a string
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o remove_spaces 145_remove_spaces.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "remove all   the spaces";
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] != ' ') s[j++] = s[i];
    s[j] = '\0';
    printf("%s\n", s);
    return 0;
}
