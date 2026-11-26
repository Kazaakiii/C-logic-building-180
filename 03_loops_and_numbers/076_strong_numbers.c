/*
 * Program 076: Strong numbers (sum of digit factorials) up to 1000
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o strong_numbers 076_strong_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int fact(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

int main(void) {
    printf("Strong numbers up to 1000:\n");
    for (int n = 1; n <= 1000; n++) {
        int sum = 0, copy = n;
        while (copy > 0) {
            sum += fact(copy % 10);
            copy /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
