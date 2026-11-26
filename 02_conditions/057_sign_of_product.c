/*
 * Program 057: Sign of a product without multiplying
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o sign_of_product 057_sign_of_product.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a = -3, b = 5, c = -2;
    int negatives = (a < 0) + (b < 0) + (c < 0);
    if (a == 0 || b == 0 || c == 0) printf("Product is zero\n");
    else if (negatives % 2 == 0) printf("Product is positive\n");
    else printf("Product is negative\n");
    return 0;
}
