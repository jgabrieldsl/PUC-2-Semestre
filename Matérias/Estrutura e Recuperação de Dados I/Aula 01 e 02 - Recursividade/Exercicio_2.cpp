// Exercício 2 - Fazer um programa com função recursiva que retorna se um inteiro é ou não primo.

#include <iostream>
using namespace std;

void ePrimo(int n, int size) {
    if (n < 1 || n % size == 0) {
        cout << n << " Não é um número primo!" << endl;
        return;
    } else if (size == 1) {
        cout << n << " É um número primo!" << endl;
        return;
    } else {
        ePrimo (n, size - 1);
    }
}

int main() {
    int n;
    cout << "Digite um numero para determinar se é ou não primo: "; cin >> n;
    ePrimo(n, n - 1);
    return 0;
}