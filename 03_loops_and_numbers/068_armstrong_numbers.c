/*
 * Program 068: Armstrong numbers up to 10000
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o armstrong_numbers 068_armstrong_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("Armstrong numbers up to 10000:\n");
    for (int n = 1; n <= 10000; n++) {
        int digits = 0, copy = n;
        while (copy > 0) { digits++; copy /= 10; }
        int sum = 0;
        copy = n;
        while (copy > 0) {
            int d = copy % 10, p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            copy /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
