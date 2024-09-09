// Exercício 2 - Construa um programa que leia os lados de um quadrilátero e determine se é um Quadrado ou um Retângulo

#include <iostream>
using namespace std;

int main() {  
    int base, lado;
    
    cout << "Digite o tamanho da base: ";
    cin >> base;
    cout << "Digite o tamanho de um lado: ";
    cin >> lado;
    
    if (base == lado) {
        cout << "\nO quadrilátero é um quadrado!";
    }
    else {
        cout << "\nO quadrilátero é um retângulo!";
    }
    
    return 0;
}
