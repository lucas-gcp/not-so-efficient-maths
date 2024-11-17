#include "functions.h"

unsigned fact(unsigned n) {
    unsigned i, result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}