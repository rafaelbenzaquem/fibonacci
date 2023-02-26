#include <iostream>
#include <cstdint>
#include "fibonacci.h"

using namespace std;



int main() {

    fibonacci fibonacci;
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
        f = fibonacci.recursivo(n);
    } else if (algo == 2) {
        f = fibonacci.iterativo(n);
    } else if (algo == 3) {
        f = fibonacci.doubling(n);
    } else {
        cout << "\nNenhum valor pedido foi digitado!";
        return 0;
    }
    cout << "\nfibonacci(" << n << ")=" << f << endl;
    return 0;
}