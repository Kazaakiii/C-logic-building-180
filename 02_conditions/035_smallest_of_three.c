/*
 * Program 035: Smallest of three numbers
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o smallest_of_three 035_smallest_of_three.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 12, b = 45, c = 3;
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Smallest = %d\n", min);
    return 0;
}
