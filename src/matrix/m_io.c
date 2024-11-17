#include "matrix.h"
#include <stdio.h>

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
