/*
 * Program 073: LCM of two numbers
 * Topic  : Loops and number logic
 * Build  : gcc -Wall -o lcm_of_two_numbers 073_lcm_of_two_numbers.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = 12, b = 18, x = a, y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    printf("LCM of %d and %d = %d\n", a, b, a / x * b);
    return 0;
}
