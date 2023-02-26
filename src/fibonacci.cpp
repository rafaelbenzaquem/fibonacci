//
// Created by Rafael on 25/02/2023.
//
#include "fibonacci.h"
#include "mathmatrix2x2.h"


fibonacci::fibonacci() {
}

fibonacci::~fibonacci() {
}

uint64_t fibonacci::recursivo(int n) {
    if (n <= 1) {
        return n;
    }
    return recursivo(n - 1) + recursivo(n - 2);
}

uint64_t fibonacci::iterativo(int n) {
    if (n <= 1) {
        return n;
    }
    uint64_t a = 0;
    uint64_t b = 1;
    uint64_t c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

uint64_t fibonacci::doubling(int n) {
    mathmatrix2x2 m;
    if (n == 0) {
        return 0;
    }
    uint64_t a[2][2] = {
            {1, 1},
            {1, 0}
    };
    m.power(a, n - 1);
    return a[0][0];
}