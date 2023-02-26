## Dependências

O projeto depende da biblioteca [googletest-1.13.0](https://github.com/google/googletest/releases/tag/release-1.13.0) para executar os testes automatizados. Certifique-se de instalar essa biblioteca antes de tentar executar os testes. A biblioteca deve ser instalada no diretório `./lib`.

### Instalação da biblioteca

Para instalar a biblioteca `googletest-1.13.0` no diretório `./lib`, execute os seguintes comandos no terminal:

```bash
$ mkdir lib
$ cd lib
$ wget https://github.com/google/googletest/archive/release-1.13.0.tar.gz
$ tar -zxvf release-1.13.0.tar.gz
$ cd googletest-release-1.13.0
$ mkdir build
$ cd build
$ cmake ..
$ make
```
Isso irá baixar o pacote da biblioteca `googletest-1.13.0`, descompactá-lo, criar um diretório de construção e compilar a biblioteca. Quando a compilação for concluída, a biblioteca estará disponível no diretório `./lib/googletest-release-1.13.0`.

### Uso da biblioteca
A biblioteca googletest-1.13.0 é usada para executar os testes automatizados do projeto. Certifique-se de que a biblioteca esteja instalada corretamente no diretório ./lib antes de tentar executar os testes.