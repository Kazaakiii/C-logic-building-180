/*
 * Program 142: Compare two strings manually
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o compare_strings 142_compare_strings.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char a[] = "apple", b[] = "apply";
    int i = 0;
    while (a[i] != '\0' && a[i] == b[i]) i++;
    int diff = a[i] - b[i];
    if (diff == 0) printf("Strings are equal\n");
    else if (diff < 0) printf("\"%s\" comes before \"%s\"\n", a, b);
    else printf("\"%s\" comes after \"%s\"\n", a, b);
    return 0;
}
