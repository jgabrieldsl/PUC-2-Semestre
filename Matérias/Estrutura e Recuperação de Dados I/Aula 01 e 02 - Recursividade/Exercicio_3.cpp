// Exercício 3 - Crie um programa recursivo que retorne todos os números primos de 1 até um número fornecido.

#include <iostream>
using namespace std;

bool ePrimo(int n, int size) {
    if (size < 2) {
        return true;
    } else if (n % size == 0) {
        return false;
    }
    
    return ePrimo(n, size - 1);
        
}

void pPrimo(int n) {
    if (n < 2) {
        return;
    } else if (ePrimo(n, n - 1)) {
        cout << n << " ";
    }
    
    pPrimo(n - 1);
}

int main () {
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    pPrimo(n);
    return 0;
}