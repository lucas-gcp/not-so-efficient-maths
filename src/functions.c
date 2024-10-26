#include "functions.h"
#include <stdio.h>

double sqrt(double n) {
    
    double x_k, x = n;

    do {
        x_k = x;
        x = 0.5*(x + n/x);
    } while(x_k - x > 0.0000000001);

    return x_k;
}