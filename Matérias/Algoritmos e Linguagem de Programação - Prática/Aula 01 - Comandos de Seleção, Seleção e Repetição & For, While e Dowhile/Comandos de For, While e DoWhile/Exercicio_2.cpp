// Exercício 2 - Elabore um programa que leia um número e imprima todos os números divisíveis por 4 que sejam menores que este número lido.

#include <iostream>
using namespace std;

int main () {
    int num, i;
    
    cout << "Digite um número: ";
    cin >> num;
    
    for (i = 1; i < num; i++) {
        if (i % 4 == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}
