/*
 * Program 060: Greeting from the hour of the day
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o time_based_greeting 060_time_based_greeting.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int hour = 14;
    if (hour < 0 || hour > 23) printf("Invalid hour\n");
    else if (hour < 12) printf("Good Morning!\n");
    else if (hour < 17) printf("Good Afternoon!\n");
    else if (hour < 21) printf("Good Evening!\n");
    else printf("Good Night!\n");
    return 0;
}
