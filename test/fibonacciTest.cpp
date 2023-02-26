//
// Created by Rafael on 25/02/2023.
//

#include <fibonacci.h>
#include "gtest/gtest.h"
#include <cstdint>

TEST(FibonacciTestSuite,AlgoritmoRecursivoN1){
        fibonacci f;
        uint64_t nesino = f.recursivo(1);
        EXPECT_EQ(nesino, 1);
}
TEST(FibonacciTestSuite,AlgoritmoRecursivoN2){
        fibonacci f;
        uint64_t nesino = f.recursivo(2);
        EXPECT_EQ(nesino, 1);
}
TEST(FibonacciTestSuite,AlgoritmoRecursivoN3){
        fibonacci f;
        uint64_t nesino = f.recursivo(3);
        EXPECT_EQ(nesino, 2);
}
TEST(FibonacciTestSuite,AlgoritmoRecursivoN4){
        fibonacci f;
        uint64_t nesino = f.recursivo(4);
        EXPECT_EQ(nesino, 3);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN5){
        fibonacci f;
        uint64_t nesino = f.recursivo(5);
        EXPECT_EQ(nesino, 5);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN6){
        fibonacci f;
        uint64_t nesino = f.recursivo(6);
        EXPECT_EQ(nesino, 8);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN7){
        fibonacci f;
        uint64_t nesino = f.recursivo(7);
        EXPECT_EQ(nesino, 13);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN10){
        fibonacci f;
        uint64_t nesino = f.recursivo(10);
        EXPECT_EQ(nesino, 55);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN20){
        fibonacci f;
        uint64_t nesino = f.recursivo(20);
        EXPECT_EQ(nesino, 6765);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN30){
        fibonacci f;
        uint64_t nesino = f.recursivo(30);
        EXPECT_EQ(nesino, 832040);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN40){
        fibonacci f;
        uint64_t nesino = f.recursivo(40);
        EXPECT_EQ(nesino, 102334155);
}

TEST(FibonacciTestSuite,AlgoritmoRecursivoN45){
        fibonacci f;
        uint64_t nesino = f.recursivo(45);
        EXPECT_EQ(nesino, 1134903170);
}

TEST(FibonacciTestSuite,AlgoritmoIterativoN93){
        fibonacci f;
        uint64_t nesino = f.iterativo(93);
        EXPECT_EQ(nesino, 12200160415121876738);

}

TEST(FibonacciTestSuite,AlgoritmoDeDoublingN93){
        fibonacci f;
        uint64_t nesino = f.doubling(93);
        EXPECT_EQ(nesino, 12200160415121876738);
}



