#include <stdio.h>
#include "matrix.h"
#include "functions.h"

int main() {
    int nrows, ncols;
    scanf("%d %d", &nrows, &ncols);
    Matrix Teste = matrix(nrows, ncols);

    matrix_read(Teste);

    matrix_print(Teste);

    matrix_free(Teste);
    
    return 0;
}