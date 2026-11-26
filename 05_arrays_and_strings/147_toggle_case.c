/*
 * Program 147: Toggle the case of every letter
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o toggle_case 147_toggle_case.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "Hello World 123";
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) s[i] = tolower(s[i]);
        else if (islower(s[i])) s[i] = toupper(s[i]);
    }
    printf("%s\n", s);
    return 0;
}
