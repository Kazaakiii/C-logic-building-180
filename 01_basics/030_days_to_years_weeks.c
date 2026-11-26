/*
 * Program 030: Convert days into years, weeks and days
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o days_to_years_weeks 030_days_to_years_weeks.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int days = 1000;
    int years = days / 365;
    int weeks = (days % 365) / 7;
    int rem = (days % 365) % 7;
    printf("%d days = %d year(s), %d week(s), %d day(s)\n", days, years, weeks, rem);
    return 0;
}
