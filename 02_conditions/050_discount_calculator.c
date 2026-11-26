/*
 * Program 050: Discount based on purchase amount
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o discount_calculator 050_discount_calculator.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double amount = 7500, discount;
    if (amount > 5000) discount = 20;
    else if (amount > 2000) discount = 10;
    else discount = 5;
    double final_amount = amount - amount * discount / 100;
    printf("Amount %.2f, Discount %.0f%%, Pay %.2f\n", amount, discount, final_amount);
    return 0;
}
