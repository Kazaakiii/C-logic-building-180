/*
 * Program 160: Reverse a string using recursion
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o reverse_string_recursion 160_reverse_string_recursion.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void reverse(char *s, int left, int right) {
    if (left >= right) return;
    char t = s[left];
    s[left] = s[right];
    s[right] = t;
    reverse(s, left + 1, right - 1);
}

int main(void) {
    char s[] = "recursion";
    reverse(s, 0, (int)strlen(s) - 1);
    printf("%s\n", s);
    return 0;
}
