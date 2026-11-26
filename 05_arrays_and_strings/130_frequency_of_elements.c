/*
 * Program 130: Frequency of each element
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o frequency_of_elements 130_frequency_of_elements.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int arr[] = {3, 1, 3, 2, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int seen[8] = {0};
    for (int i = 0; i < n; i++) {
        if (seen[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[j] == arr[i]) { count++; seen[j] = 1; }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }
    return 0;
}
