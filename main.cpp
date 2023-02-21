#include <iostream>
#include <cstdint>

using namespace std;

uint64_t fibonacciRecursivo(int n);

uint64_t fibonacciIterativo(int n);

int main() {
    int n;
    cout << "digite o valor do termo da funcao fibonacci:";
    cin >> n;
    int algo = 0;
    cout << "para algoritmo recursivo digite 1\n";
    cout << "para algoritmo iterativo digite 2\n";
    cout << ">>_";
    cin >> algo;
    uint64_t f;
    if (algo == 1) {
        f = fibonacciRecursivo(n);
    } else if (algo == 2) {
        f = fibonacciIterativo(n);
    } else {
        cout << "\nNenhum valor pedido foi digitado!";
        return 0;
    }
    cout << "\nfibonacci(" << n << ")=" << f << endl;
    return 0;
}

// função recursiva para calcular o n-ésimo termo da sequência de fibonacci, complexidade exponêncial 2^n
uint64_t fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// função iterativa para calcular o n-ésimo termo da sequência de fibonacci, complexidade linear 2n
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
