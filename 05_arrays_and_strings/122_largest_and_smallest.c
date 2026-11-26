/*
 * Program 122: Largest and smallest element of an array
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o largest_and_smallest 122_largest_and_smallest.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {34, 7, 89, 12, 56, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Largest = %d, Smallest = %d\n", max, min);
    return 0;
}
