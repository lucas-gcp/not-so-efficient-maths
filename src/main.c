#include <stdio.h>
#include "matrix.h"
#include "functions.h"

int main() {
    Matrix Teste = matrix(2, 2);

    matrix_read(Teste);

    matrix_print(Teste);

    matrix_free(Teste);
    
    return 0;
}