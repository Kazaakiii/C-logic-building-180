/*
 * Program 032: Check positive, negative or zero
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o positive_negative_zero 032_positive_negative_zero.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = -5;
    if (n > 0) printf("%d is Positive\n", n);
    else if (n < 0) printf("%d is Negative\n", n);
    else printf("The number is Zero\n");
    return 0;
}
