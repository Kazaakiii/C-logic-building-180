/*
 * Program 059: Quadrant of a point
 * Topic  : Conditions: if-else, nested if, switch
 * Build  : gcc -Wall -o quadrant_of_point 059_quadrant_of_point.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int x = 3, y = -4;
    if (x > 0 && y > 0) printf("First quadrant\n");
    else if (x < 0 && y > 0) printf("Second quadrant\n");
    else if (x < 0 && y < 0) printf("Third quadrant\n");
    else if (x > 0 && y < 0) printf("Fourth quadrant\n");
    else printf("On an axis\n");
    return 0;
}
