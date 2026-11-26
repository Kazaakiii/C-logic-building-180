/*
 * Program 132: Add two matrices
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o matrix_addition 132_matrix_addition.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{7, 8, 9}, {1, 2, 3}};
    printf("Sum:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) printf("%3d", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
