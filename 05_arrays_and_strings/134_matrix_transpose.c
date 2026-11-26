/*
 * Program 134: Transpose of a matrix
 * Topic  : Arrays, matrices and strings
 * Build  : gcc -Wall -o matrix_transpose 134_matrix_transpose.c -lm
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Transpose:\n");
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 2; i++) printf("%3d", a[i][j]);
        printf("\n");
    }
    return 0;
}
