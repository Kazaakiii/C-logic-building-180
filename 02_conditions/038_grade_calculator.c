/*
 * Program 038: Grade from marks using else-if ladder
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o grade_calculator 038_grade_calculator.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int marks = 78;
    char grade;
    if (marks >= 90) grade = 'A';
    else if (marks >= 75) grade = 'B';
    else if (marks >= 60) grade = 'C';
    else if (marks >= 40) grade = 'D';
    else grade = 'F';
    printf("Marks = %d, Grade = %c\n", marks, grade);
    return 0;
}
