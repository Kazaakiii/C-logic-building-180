/*
 * Program 131: Rotate an array to the left by k
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o rotate_array_left 131_rotate_array_left.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;
    int out[7];
    for (int i = 0; i < n; i++) out[i] = arr[(i + k) % n];
    printf("Rotated left by %d: ", k);
    for (int i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}
