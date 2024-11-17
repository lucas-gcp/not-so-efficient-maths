#include "functions.h"
#include <stdio.h>

double t_sin(double n) {
    unsigned i;
    double term, result = n;
    for (i = 1; i < 8; i++) { // can't handle more iterations 
        term = ((double)powi(-1, i))*powd(n, 2*i + 1) / fact(2*i + 1);
        result += term;
        printf("%d\n", fact(2*i + 1));
    }
    return result;
}