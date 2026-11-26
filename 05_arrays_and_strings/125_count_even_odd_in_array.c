/*
 * Program 125: Count even and odd elements
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o count_even_odd_in_array 125_count_even_odd_in_array.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {4, 7, 10, 3, 8, 15, 22};
    int n = sizeof(arr) / sizeof(arr[0]), even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}
