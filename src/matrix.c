#include <stdio.h>
#include "matrix.h"

Matrix matrix(int nrows, int ncols) {
    Matrix m = malloc(sizeof(*m));

    m->nrows = nrows;
    m->ncols = ncols;

    m->data = malloc(sizeof(double*) * nrows);
    int i;
    for (i = 0; i < nrows; i++)
        m->data[i] = malloc(sizeof(double) * ncols);
    return m;
}

void matrix_free(Matrix m) {
    int i;
    for (i = 0; i < m->nrows; i++)
        free(m->data[i]);
    free(m->data);
    free(m);
}

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