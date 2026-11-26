/*
 * Program 056: Largest of four numbers using nested if
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o largest_of_four_nested_if 056_largest_of_four_nested_if.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 14, b = 92, c = 37, d = 58, max;
    if (a > b) {
        if (a > c) max = (a > d) ? a : d;
        else max = (c > d) ? c : d;
    } else {
        if (b > c) max = (b > d) ? b : d;
        else max = (c > d) ? c : d;
    }
    printf("Largest = %d\n", max);
    return 0;
}
