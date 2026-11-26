/*
 * Program 170: Pass an array to a function
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o pass_array_to_function 170_pass_array_to_function.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int array_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main(void) {
    int a[] = {14, 82, 37, 5, 61};
    printf("Maximum = %d\n", array_max(a, 5));
    return 0;
}
