/*
 * Program 144: Frequency of each character in a string
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o character_frequency 144_character_frequency.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char s[] = "programming";
    int freq[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) freq[(unsigned char)s[i]]++;
    for (int i = 0; i < 256; i++)
        if (freq[i] > 0) printf("'%c' -> %d\n", i, freq[i]);
    return 0;
}
