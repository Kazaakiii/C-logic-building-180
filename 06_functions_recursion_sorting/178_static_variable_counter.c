/*
 * Program 178: Static variable keeps its value between calls
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o static_variable_counter 178_static_variable_counter.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int counter(void) {
    static int count = 0;
    return ++count;
}

int main(void) {
    for (int i = 0; i < 5; i++) printf("Call %d -> %d\n", i + 1, counter());
    return 0;
}
