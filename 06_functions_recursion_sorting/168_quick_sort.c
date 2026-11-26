/*
 * Program 168: Quick sort
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o quick_sort 168_quick_sort.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (a[j] < pivot) swap(&a[++i], &a[j]);
    swap(&a[i + 1], &a[high]);
    return i + 1;
}

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}

int main(void) {
    int a[] = {10, 7, 8, 9, 1, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, n - 1);
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
