/*
 * Program 124: Second largest element
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o second_largest 124_second_largest.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {34, 7, 89, 12, 56, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = -2147483647 - 1, second = -2147483647 - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) { second = first; first = arr[i]; }
        else if (arr[i] > second && arr[i] != first) second = arr[i];
    }
    printf("Largest = %d, Second largest = %d\n", first, second);
    return 0;
}
