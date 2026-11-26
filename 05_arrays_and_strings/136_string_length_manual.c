/*
 * Program 136: Length of a string without strlen
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o string_length_manual 136_string_length_manual.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "logic building";
    int len = 0;
    while (s[len] != '\0') len++;
    printf("Length of \"%s\" = %d\n", s, len);
    return 0;
}
