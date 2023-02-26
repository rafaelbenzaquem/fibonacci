//
// Created by Rafael on 25/02/2023.
//
#include "mathmatrix2x2.h"

mathmatrix2x2::mathmatrix2x2() {

}

mathmatrix2x2::~mathmatrix2x2() {

}

void mathmatrix2x2::multiply(uint64_t a[2][2], uint64_t b[2][2]) {

    uint64_t x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    uint64_t y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    uint64_t z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    uint64_t w = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a[0][0] = x;
    a[0][1] = y;
    a[1][0] = z;
    a[1][1] = w;
}

void mathmatrix2x2::power(uint64_t a[2][2], int n) {
    if (n <= 1) {
        return ;
    }
    power(a, n / 2);
    multiply(a, a);
    if (n % 2 != 0) {
        uint64_t b[2][2] = {
                {1, 1},
                {1, 0}
        };
        multiply(a, b);
    }
}