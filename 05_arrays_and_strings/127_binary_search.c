/*
 * Program 127: Binary search on a sorted array
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o binary_search 127_binary_search.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]), key = 23;
    int low = 0, high = n - 1, pos = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) { pos = mid; break; }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (pos >= 0) printf("%d found at index %d\n", key, pos);
    else printf("%d not found\n", key);
    return 0;
}
