/*
 * Program 048: BMI and its category
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o bmi_category 048_bmi_category.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double weight = 68, height = 1.75;
    double bmi = weight / (height * height);
    printf("BMI = %.1f -> ", bmi);
    if (bmi < 18.5) printf("Underweight\n");
    else if (bmi < 25) printf("Normal\n");
    else if (bmi < 30) printf("Overweight\n");
    else printf("Obese\n");
    return 0;
}
