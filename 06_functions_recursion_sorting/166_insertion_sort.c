/*
 * Program 166: Insertion sort
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o insertion_sort 166_insertion_sort.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[] = {12, 11, 13, 5, 6, 1};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
