/*
 * Program 040: Check whether three sides form a triangle
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o triangle_validity 040_triangle_validity.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 3, b = 4, c = 5;
    if (a + b > c && b + c > a && a + c > b) printf("Valid triangle\n");
    else printf("Not a valid triangle\n");
    return 0;
}
