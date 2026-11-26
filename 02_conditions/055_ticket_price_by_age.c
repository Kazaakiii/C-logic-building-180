/*
 * Program 055: Ticket price depending on age
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o ticket_price_by_age 055_ticket_price_by_age.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int age = 10, price;
    if (age < 5) price = 0;
    else if (age <= 12) price = 50;
    else if (age < 60) price = 100;
    else price = 60;
    printf("Age %d -> Ticket price Rs. %d\n", age, price);
    return 0;
}
