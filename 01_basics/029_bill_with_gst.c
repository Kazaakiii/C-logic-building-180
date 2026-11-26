/*
 * Program 029: Final bill amount with GST
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o bill_with_gst 029_bill_with_gst.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    float price = 2500, gst_percent = 18;
    float gst = price * gst_percent / 100;
    printf("Price = %.2f\nGST   = %.2f\nTotal = %.2f\n", price, gst, price + gst);
    return 0;
}
