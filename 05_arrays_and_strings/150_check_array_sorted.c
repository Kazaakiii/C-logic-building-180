/*
 * Program 150: Check whether an array is sorted
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o check_array_sorted 150_check_array_sorted.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]), sorted = 1;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) { sorted = 0; break; }
    printf("Array is %s\n", sorted ? "sorted" : "not sorted");
    return 0;
}
