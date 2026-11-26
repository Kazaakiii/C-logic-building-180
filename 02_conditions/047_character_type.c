/*
 * Program 047: Classify characters as upper, lower, digit or special
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o character_type 047_character_type.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    const char *tests = "aZ7@ ";
    for (int i = 0; tests[i] != '\0'; i++) {
        char ch = tests[i];
        if (isupper(ch)) printf("'%c' -> Uppercase letter\n", ch);
        else if (islower(ch)) printf("'%c' -> Lowercase letter\n", ch);
        else if (isdigit(ch)) printf("'%c' -> Digit\n", ch);
        else if (ch == ' ') printf("' ' -> Space\n");
        else printf("'%c' -> Special character\n", ch);
    }
    return 0;
}
