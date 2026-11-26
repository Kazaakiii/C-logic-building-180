/*
 * Program 043: Number of days in a month
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o days_in_month 043_days_in_month.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int month = 2, year = 2024, days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31; break;
        case 4: case 6: case 9: case 11:
            days = 30; break;
        case 2:
            days = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
            break;
        default:
            printf("Invalid month\n");
            return 1;
    }
    printf("Month %d of %d has %d days\n", month, year, days);
    return 0;
}
