/*
 * Program 036: Check for leap year
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o leap_year 036_leap_year.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
    return 0;
}
