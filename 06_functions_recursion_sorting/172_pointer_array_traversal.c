/*
 * Program 172: Traverse an array using a pointer
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o pointer_array_traversal 172_pointer_array_traversal.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    for (int i = 0; i < 5; i++) printf("a[%d] = %d\n", i, *(p + i));
    return 0;
}
