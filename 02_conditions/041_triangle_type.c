/*
 * Program 041: Equilateral, isosceles or scalene
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o triangle_type 041_triangle_type.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 5, b = 5, c = 8;
    if (a == b && b == c) printf("Equilateral\n");
    else if (a == b || b == c || a == c) printf("Isosceles\n");
    else printf("Scalene\n");
    return 0;
}
