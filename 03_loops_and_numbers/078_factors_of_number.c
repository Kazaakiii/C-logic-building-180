/*
 * Program 078: All factors of a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o factors_of_number 078_factors_of_number.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 60;
    printf("Factors of %d: ", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0) printf("%d ", i);
    printf("\n");
    return 0;
}
