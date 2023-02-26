//
// Created by Rafael on 25/02/2023.
//

#ifndef MATHMATRIX2x2_H
#define MATHMATRIX2x2_H

#include <cstdint>

class mathmatrix2x2 {

public:
    mathmatrix2x2();

    virtual ~mathmatrix2x2();

    void multiply(uint64_t a[2][2], uint64_t b[2][2]);

    void power(uint64_t a[2][2], int n);

};

#endif //MATHMATRIX2x2_H
