/*
 * Program 163: Tower of Hanoi
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o tower_of_hanoi 163_tower_of_hanoi.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void hanoi(int n, char from, char to, char via) {
    if (n == 0) return;
    hanoi(n - 1, from, via, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, via, to, from);
}

int main(void) {
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
