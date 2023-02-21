#include <iostream>

using namespace std;

int fibonacciRecursivo(int n);

int main() {
    int n;
    cout << "digite o valor do termo da funcao fibonacci:";
    cin >> n;
    int f = fibonacciRecursivo(n);
    cout << "\nfibonacci(" << n << ")=" << f << endl;
    return 0;
}

// função recursiva para calcular o n-ésimo termo da sequência de fibonacci, complexidade exponêncial 2^n
int fibonacciRecursivo(int n){
    if(n<=1){
        return n;
    }
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}
