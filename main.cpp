#include <iostream>
#include <cstdint>

using namespace std;

 uint64_t fibonacciRecursivo(int n);

int main() {
    int n;
    cout << "digite o valor do termo da funcao fibonacci:";
    cin >> n;
    uint64_t f = fibonacciRecursivo(n);
    cout << "\nfibonacci(" << n << ")=" << f << endl;
    return 0;
}

// função recursiva para calcular o n-ésimo termo da sequência de fibonacci, complexidade exponêncial 2^n
uint64_t fibonacciRecursivo(int n){
    if(n<=1){
        return n;
    }
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}
