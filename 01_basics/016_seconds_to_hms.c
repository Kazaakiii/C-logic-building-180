/*
 * Program 016: Convert seconds to hours, minutes and seconds
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o seconds_to_hms 016_seconds_to_hms.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int total = 98765;
    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;
    printf("%d seconds = %d hr %d min %d sec\n", total, h, m, s);
    return 0;
}
