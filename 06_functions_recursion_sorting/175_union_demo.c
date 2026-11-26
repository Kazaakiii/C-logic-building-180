/*
 * Program 175: Union shares memory between members
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o union_demo 175_union_demo.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

union Data {
    int i;
    float f;
    char c;
};

int main(void) {
    union Data d;
    d.i = 65;
    printf("As int  : %d\n", d.i);
    printf("As char : %c\n", d.c);
    printf("Size of union = %zu bytes\n", sizeof(d));
    return 0;
}
