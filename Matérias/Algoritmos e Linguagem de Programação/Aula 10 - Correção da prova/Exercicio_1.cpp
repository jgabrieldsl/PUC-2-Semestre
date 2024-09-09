// Exercício 1 - Soma dos números pares de 1 até o número inteiro digitado:

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número positivo: ";
    cin >> num;
    int soma = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    cout << "A soma: " << soma;
    return 0;
}
