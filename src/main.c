#include <stdio.h>
#include "matrix.h"
#include "functions.h"

int main() {
    float M[3][3];
    
    readMatrix(3, 3, M);
    printMatrix(3, 3, M);
    
    return 0;
}