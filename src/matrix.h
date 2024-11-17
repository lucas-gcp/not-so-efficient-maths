#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int nrows;
    int ncols;
    double **data;
}* Matrix;

Matrix matrix(int ncols, int nrows);

void matrix_free(Matrix m);

void matrix_read(Matrix m);

void matrix_print(Matrix m);

#endif
