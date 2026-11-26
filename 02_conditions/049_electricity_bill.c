/*
 * Program 049: Electricity bill using unit slabs
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o electricity_bill 049_electricity_bill.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int units = 250;
    double bill;
    if (units <= 100) bill = units * 1.5;
    else if (units <= 200) bill = 100 * 1.5 + (units - 100) * 2.5;
    else bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    printf("Units = %d, Bill = Rs. %.2f\n", units, bill);
    return 0;
}
