# Fibonacci
A classe Fibonacci implementa três métodos para calcular o n-ésimo termo da sequência de Fibonacci: iterativo, recursivo e doubling. O arquivo de cabeçalho `fibonacci.h` contém a definição da classe e dos métodos públicos, enquanto o arquivo de implementação `fibonacci.cpp` contém a implementação dos métodos.

### Instalação
Para usar a classe Fibonacci, você precisa incluir o arquivo de cabeçalho `fibonacci.h` em seu programa e compilar o arquivo de implementação `fibonacci.cpp` junto com seu programa. Certifique-se de que ambos os arquivos estão no diretório src do seu projeto.

### Uso
Criando um objeto Fibonacci
Para usar a classe Fibonacci, primeiro você precisa criar um objeto Fibonacci. Você pode fazer isso da seguinte maneira:

```c++
#include "fibonacci.h"

Fibonacci fib;
```
### Calculando o n-ésimo termo iterativamente
Para calcular o n-ésimo termo da sequência de Fibonacci de forma iterativa, use o método iterativo da classe Fibonacci. O método recebe um inteiro n como parâmetro e retorna um `uint64_t` com o valor do n-ésimo termo. Por exemplo:

```c++
uint64_t resultado = fib.iterativo(10);
```
Este código calcula o décimo termo da sequência de Fibonacci usando o método `iterativo` e armazena o resultado na variável resultado.

### Calculando o n-ésimo termo recursivamente
Para calcular o n-ésimo termo da sequência de Fibonacci de forma recursiva, use o método recursivo da classe Fibonacci. O método recebe um inteiro n como parâmetro e retorna um `uint64_t` com o valor do n-ésimo termo. Por exemplo:

```c++
uint64_t resultado = fib.recursivo(10);
```
Este código calcula o décimo termo da sequência de Fibonacci usando o método recursivo e armazena o resultado na variável `resultado`.

### Calculando o n-ésimo termo com Doubling
Para calcular o n-ésimo termo da sequência de Fibonacci com o algoritmo de Doubling, use o método `doubling` da classe `Fibonacci`. O método recebe um inteiro `n` como parâmetro e retorna um `uint64_t` com o valor do n-ésimo termo. Por exemplo:

```c++
uint64_t resultado = fib.doubling(10);
```

Este código calcula o décimo termo da sequência de Fibonacci usando o algoritmo de Doubling e armazena o resultado na variável resultado.

### Limitações
A classe Fibonacci foi projetada para calcular termos da sequência de Fibonacci de até 93, devido às limitações do tipo de dados uint64_t. Se você tentar calcular um termo maior que 93, o método retornará um valor incorreto.
