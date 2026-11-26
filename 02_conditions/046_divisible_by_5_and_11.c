/*
 * Program 046: Check divisibility by 5 and 11
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o divisible_by_5_and_11 046_divisible_by_5_and_11.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int n = 55;
    if (n % 5 == 0 && n % 11 == 0) printf("%d is divisible by both 5 and 11\n", n);
    else if (n % 5 == 0) printf("%d is divisible by 5 only\n", n);
    else if (n % 11 == 0) printf("%d is divisible by 11 only\n", n);
    else printf("%d is divisible by neither\n", n);
    return 0;
}
