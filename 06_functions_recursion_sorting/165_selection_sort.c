/*
 * Program 165: Selection sort
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o selection_sort 165_selection_sort.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[] = {64, 25, 12, 22, 11, 90, 3};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
