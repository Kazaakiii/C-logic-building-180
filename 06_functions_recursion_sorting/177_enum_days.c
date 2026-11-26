/*
 * Program 177: Enumeration of weekdays
 * Topic  : Functions, recursion, sorting, pointers, structs
 * Build  : gcc -Wall -o enum_days 177_enum_days.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main(void) {
    const char *names[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    for (enum Day d = MON; d <= SUN; d++)
        printf("%d -> %s%s\n", d, names[d], (d == SAT || d == SUN) ? " (weekend)" : "");
    return 0;
}
