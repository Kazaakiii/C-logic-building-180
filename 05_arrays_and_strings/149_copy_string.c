/*
 * Program 149: Copy one string into another manually
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o copy_string 149_copy_string.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char src[] = "copy me", dest[50];
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    printf("Source: %s\nCopy  : %s\n", src, dest);
    return 0;
}
