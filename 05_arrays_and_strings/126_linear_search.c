/*
 * Program 126: Linear search
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o linear_search 126_linear_search.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {9, 4, 7, 1, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]), key = 8, pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { pos = i; break; }
    }
    if (pos >= 0) printf("%d found at index %d\n", key, pos);
    else printf("%d not found\n", key);
    return 0;
}
