/*
 * Program 143: Count the words in a sentence
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o word_count 143_word_count.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "  logic building is fun  ";
    int words = 0, in_word = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && !in_word) { in_word = 1; words++; }
        else if (s[i] == ' ') in_word = 0;
    }
    printf("Number of words = %d\n", words);
    return 0;
}
