/*
 * Program 169: Swap two numbers using pointers
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o swap_using_pointers 169_swap_using_pointers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main(void) {
    int x = 10, y = 20;
    printf("Before: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("After : x=%d y=%d\n", x, y);
    return 0;
}
