/*
 * Program 058: Century of a given year
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o century_of_year 058_century_of_year.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int year = 2026;
    int century = (year - 1) / 100 + 1;
    printf("Year %d belongs to century %d\n", year, century);
    return 0;
}
