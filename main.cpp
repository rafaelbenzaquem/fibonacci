#include <iostream>
#include <cstdint>

using namespace std;

uint64_t fibonacciRecursivo(int n);

uint64_t fibonacciIterativo(int n);

uint64_t fibonacciDoubling(int n);

int main() {
    int n;
    cout << "digite o valor do termo da funcao fibonacci:";
    cin >> n;
    int algo = 0;
    cout << "para algoritmo recursivo digite 1\n";
    cout << "para algoritmo iterativo digite 2\n";
    cout << "para algoritmo de Doubling digite 3\n";
    cout << ">>";
    cin >> algo;
    uint64_t f;
    if (algo == 1) {
        f = fibonacciRecursivo(n);
    } else if (algo == 2) {
        f = fibonacciIterativo(n);
    }else if (algo == 3) {
        f = fibonacciDoubling(n);
    } else {
        cout << "\nNenhum valor pedido foi digitado!";
        return 0;
    }
    cout << "\nfibonacci(" << n << ")=" << f << endl;
    return 0;
}

// função recursiva para calcular o n-ésimo termo da sequência de fibonacci, complexidade de tempo exponêncial 2^n
uint64_t fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// função iterativa para calcular o n-ésimo termo da sequência de fibonacci, complexidade de tempo linear 2*n
uint64_t fibonacciIterativo(int n) {
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

// Função auxiliar que multiplica duas matrizes 2x2
void multiply_matrix(uint64_t a[2][2], uint64_t b[2][2]) {
    uint64_t x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    uint64_t y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    uint64_t z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    uint64_t w = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a[0][0] = x;
    a[0][1] = y;
    a[1][0] = z;
    a[1][1] = w;
}

// Função que calcula a matriz 2x2 elevada à potência n
void power_matrix(uint64_t a[2][2], int n) {
    if (n <= 1) {
        return;
    }
    uint64_t b[2][2] = {
            {1, 1},
            {1, 0}
    };
    power_matrix(a, n / 2);
    multiply_matrix(a, a);
    if (n % 2 != 0) {
        multiply_matrix(a, b);
    }
}

// Função que calcula o n-ésimo termo da sequência de Fibonacci usando o algoritmo de Doubling, complexidade de tempo logaritimica LogN
uint64_t fibonacciDoubling(int n) {
    if (n == 0) {
        return 0;
    }
    uint64_t a[2][2] = {
            {1, 1},
            {1, 0}
    };
    power_matrix(a, n - 1);
    return a[0][0];
}