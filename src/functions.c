#include "functions.h"

// Polynomial functions
double nr_sqrt(double n) {
    
    double x_k, x = n;

    do {
        x_k = x;
        x = 0.5*(x + n/x);
    } while(x_k - x > 0.0000000001);

    return x_k;
}

int ipowi(int base, int exp) {
    int i, result = 1;
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

double ipowd(double base, int exp) {
    int i;
    double result = 1;
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

// Trigonometric Functions
double t_sin(double n) {
    unsigned i;
    double term, result = n;
    // can't handle more iterations (unsigned limit)
    for (i = 1; i < 8; i++) {
        term = ((double)ipowi(-1, i))*ipowd(n, 2*i + 1) / fact(2*i + 1);
        result += term;
    }
    return result;
}

// Recursive Functions
unsigned fact(unsigned n) {
    unsigned i, result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}