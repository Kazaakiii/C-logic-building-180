/*
 * Program 129: Merge two sorted arrays
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o merge_sorted_arrays 129_merge_sorted_arrays.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[] = {1, 4, 7, 10}, b[] = {2, 3, 8, 9, 12};
    int n = 4, m = 5, c[9], i = 0, j = 0, k = 0;
    while (i < n && j < m) c[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];
    printf("Merged: ");
    for (int x = 0; x < k; x++) printf("%d ", c[x]);
    printf("\n");
    return 0;
}
