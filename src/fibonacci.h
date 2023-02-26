//
// Created by Rafael on 25/02/2023.
//

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <cstdint>

class  fibonacci {

public:
    fibonacci();

    virtual ~fibonacci();

    uint64_t recursivo(int n);

    uint64_t iterativo(int n);

    uint64_t doubling(int n);

};

#endif //FIBONACCI_H
