/*
 * Program 018: Total and percentage of five subjects
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o percentage_of_marks 018_percentage_of_marks.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int marks[5] = {78, 85, 66, 90, 72};
    int total = 0;
    for (int i = 0; i < 5; i++) total += marks[i];
    printf("Total      = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", total / 5.0);
    return 0;
}
