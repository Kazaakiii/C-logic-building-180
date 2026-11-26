/*
 * Program 002: Print a name and age using variables
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o print_name_age 002_print_name_age.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char name[] = "Asha";
    int age = 19;
    printf("Name: %s\nAge : %d\n", name, age);
    return 0;
}
