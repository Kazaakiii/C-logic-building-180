/*
 * Program 148: Find the longest word in a sentence
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o longest_word 148_longest_word.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "programming makes logic building fun";
    char best[50] = "", cur[50];
    int len = 0;
    for (int i = 0;; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            cur[len++] = s[i];
        } else {
            cur[len] = '\0';
            if (len > (int)strlen(best)) strcpy(best, cur);
            len = 0;
            if (s[i] == '\0') break;
        }
    }
    printf("Longest word: %s (%d letters)\n", best, (int)strlen(best));
    return 0;
}
