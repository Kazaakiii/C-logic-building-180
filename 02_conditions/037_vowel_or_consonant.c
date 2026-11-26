/*
 * Program 037: Check vowel or consonant
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o vowel_or_consonant 037_vowel_or_consonant.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char ch = 'E';
    char c = tolower(ch);
    if (!isalpha(c)) printf("'%c' is not an alphabet\n", ch);
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("'%c' is a Vowel\n", ch);
    else
        printf("'%c' is a Consonant\n", ch);
    return 0;
}
