#include "functions.h"
#include <stdio.h>

float nr_sqrt(float n) {
    
    float x_k, x = n;

    do {
        x_k = x;
        x = 0.5*(x + n/x);
    } while(x_k - x > 0.0000000001);

    return x_k;
}