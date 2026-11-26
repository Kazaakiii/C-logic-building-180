/*
 * Program 128: Remove duplicate elements
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o remove_duplicates 128_remove_duplicates.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[20], m = 0;
    for (int i = 0; i < n; i++) {
        int dup = 0;
        for (int j = 0; j < m; j++)
            if (result[j] == arr[i]) { dup = 1; break; }
        if (!dup) result[m++] = arr[i];
    }
    printf("Unique elements: ");
    for (int i = 0; i < m; i++) printf("%d ", result[i]);
    printf("\n");
    return 0;
}
