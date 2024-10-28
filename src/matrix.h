#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>

typedef struct {
    int nrows;
    int ncols;
    double **data;
}* Matrix;

Matrix matrix(int nrows, int ncols);

void matrix_free(Matrix m);

void matrix_read(Matrix m);

void matrix_print(Matrix m);

#endif