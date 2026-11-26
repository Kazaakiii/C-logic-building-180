/*
 * Program 121: Sum and average of array elements
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o array_sum_and_average 121_array_sum_and_average.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {12, 7, 25, 3, 18};
    int n = sizeof(arr) / sizeof(arr[0]), sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %d, Average = %.2f\n", sum, (double)sum / n);
    return 0;
}
