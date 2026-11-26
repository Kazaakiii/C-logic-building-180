/*
 * Program 039: Check voting eligibility
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o voting_eligibility 039_voting_eligibility.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int age = 18;
    if (age >= 18) printf("Eligible to vote\n");
    else printf("Not eligible, wait %d more year(s)\n", 18 - age);
    return 0;
}
