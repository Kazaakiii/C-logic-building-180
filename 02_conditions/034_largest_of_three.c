/*
 * Program 034: Largest of three numbers
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o largest_of_three 034_largest_of_three.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 12, b = 45, c = 30;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Largest = %d\n", max);
    return 0;
}
