/*
 * Program 167: Merge sort
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o merge_sort 167_merge_sort.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void merge(int a[], int l, int m, int r) {
    int tmp[100], i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) tmp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (int x = 0; x < k; x++) a[l + x] = tmp[x];
}

void merge_sort(int a[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    merge_sort(a, l, m);
    merge_sort(a, m + 1, r);
    merge(a, l, m, r);
}

int main(void) {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(a) / sizeof(a[0]);
    merge_sort(a, 0, n - 1);
    printf("Sorted: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
