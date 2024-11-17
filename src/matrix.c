#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

// Matrix memory functions
Matrix matrix(int ncols, int nrows) {
    Matrix m = malloc(sizeof(*m));

    m->ncols = ncols;
    m->nrows = nrows;

    m->data = malloc(sizeof(double*) * ncols);
    int i;
    for (i = 0; i < ncols; i++)
        m->data[i] = malloc(sizeof(double) * nrows);
    return m;
}

void matrix_free(Matrix m) {
    int i;
    for (i = 0; i < m->ncols; i++)
        free(m->data[i]);
    free(m->data);
    free(m);
}

// Matrix I/O functions
void matrix_read(Matrix m) {
    int i, j;
    for (i = 0; i < m->ncols; i++) {
        for (j = 0; j < m->nrows; j++) {
            scanf("%lf", &m->data[i][j]);
        }
    }
}

void matrix_print(Matrix m) {
    int i, j;
    for (i = 0; i < m->ncols; i++) {
        for (j = 0; j < m->nrows; j++) {
            printf("%lf ", m->data[i][j]);
        }
        printf("\n");
    }
}
