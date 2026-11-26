/*
 * Program 025: Distance between two points
 * Topic  : Basics: input/output, variables, operators, formulas
 * Build  : gcc -Wall -o distance_between_points 025_distance_between_points.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    double x1 = 1, y1 = 2, x2 = 4, y2 = 6;
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distance = %.2f\n", d);
    return 0;
}
