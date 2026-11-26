/*
 * Program 135: Sum of the diagonals of a square matrix
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o matrix_diagonal_sum 135_matrix_diagonal_sum.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int main_d = 0, other_d = 0;
    for (int i = 0; i < 3; i++) {
        main_d += m[i][i];
        other_d += m[i][2 - i];
    }
    printf("Main diagonal = %d, Other diagonal = %d\n", main_d, other_d);
    return 0;
}
