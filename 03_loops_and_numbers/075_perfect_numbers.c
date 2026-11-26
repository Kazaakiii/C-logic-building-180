/*
 * Program 075: Perfect numbers up to 10000
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o perfect_numbers 075_perfect_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    printf("Perfect numbers up to 10000:\n");
    for (int n = 2; n <= 10000; n++) {
        int sum = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) sum += n / i;
            }
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
