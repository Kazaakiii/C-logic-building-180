/*
 * Program 141: Concatenate two strings manually
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o concatenate_strings 141_concatenate_strings.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char a[50] = "Hello, ", b[] = "World!";
    int i = 0, j = 0;
    while (a[i] != '\0') i++;
    while (b[j] != '\0') a[i++] = b[j++];
    a[i] = '\0';
    printf("%s\n", a);
    return 0;
}
