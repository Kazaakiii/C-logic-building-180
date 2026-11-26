/*
 * Program 146: Check whether two strings are anagrams
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o anagram_check 146_anagram_check.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char a[] = "listen", b[] = "silent";
    int count[26] = {0}, ok = 1;
    for (int i = 0; a[i]; i++) count[tolower(a[i]) - 'a']++;
    for (int i = 0; b[i]; i++) count[tolower(b[i]) - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0) ok = 0;
    printf("\"%s\" and \"%s\" %s anagrams\n", a, b, ok ? "are" : "are not");
    return 0;
}
