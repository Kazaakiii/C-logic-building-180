/*
 * Program 020: Size of the basic data types
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o size_of_datatypes 020_size_of_datatypes.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("char   : %zu byte(s)\n", sizeof(char));
    printf("int    : %zu byte(s)\n", sizeof(int));
    printf("float  : %zu byte(s)\n", sizeof(float));
    printf("double : %zu byte(s)\n", sizeof(double));
    printf("long   : %zu byte(s)\n", sizeof(long));
    return 0;
}
