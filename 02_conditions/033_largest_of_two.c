/*
 * Program 033: Largest of two numbers
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o largest_of_two 033_largest_of_two.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 42, b = 37;
    printf("Largest = %d\n", a > b ? a : b);
    return 0;
}
