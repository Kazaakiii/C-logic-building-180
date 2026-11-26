/*
 * Program 161: Palindrome check using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o palindrome_recursion 161_palindrome_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int is_pal(const char *s, int left, int right) {
    if (left >= right) return 1;
    if (s[left] != s[right]) return 0;
    return is_pal(s, left + 1, right - 1);
}

int main(void) {
    const char *words[] = {"level", "logic", "racecar"};
    for (int i = 0; i < 3; i++)
        printf("%s -> %s\n", words[i],
               is_pal(words[i], 0, (int)strlen(words[i]) - 1) ? "palindrome" : "not palindrome");
    return 0;
}
