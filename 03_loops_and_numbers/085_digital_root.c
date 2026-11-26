/*
 * Program 085: Digital root of a number
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o digital_root 085_digital_root.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 9875, x = n;
    while (x >= 10) {
        int sum = 0;
        while (x > 0) { sum += x % 10; x /= 10; }
        x = sum;
    }
    printf("Digital root of %d = %d\n", n, x);
    return 0;
}
