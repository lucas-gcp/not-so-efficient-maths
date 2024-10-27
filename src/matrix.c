#include <stdio.h>
#include "matrix.h"

void readMatrix(int m, int n, float M[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &M[i][j]);
        }
    }
}

void printMatrix(int m, int n, float M[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%f ", M[i][j]);
        }
        printf("\n");
    }
}