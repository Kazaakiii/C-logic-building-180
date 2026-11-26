/*
 * Program 019: ASCII value of a character
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o ascii_value 019_ascii_value.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char ch = 'A';
    printf("ASCII value of '%c' is %d\n", ch, ch);
    return 0;
}
