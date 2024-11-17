#include "functions.h"

int powi(int base, int exp) {
    int i, result = 1;
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

double powd(double base, int exp) {
    int i;
    double result = 1;
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}