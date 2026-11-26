/*
 * Program 176: Dynamic memory with malloc and free
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o dynamic_memory_malloc 176_dynamic_memory_malloc.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
