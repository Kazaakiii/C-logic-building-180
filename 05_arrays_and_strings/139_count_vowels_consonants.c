/*
 * Program 139: Count vowels and consonants
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o count_vowels_consonants 139_count_vowels_consonants.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "Hello World";
    int vowels = 0, consonants = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;
        else if (isalpha(c)) consonants++;
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
