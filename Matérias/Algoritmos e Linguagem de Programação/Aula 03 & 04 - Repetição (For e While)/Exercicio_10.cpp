// Exercício 10 - Sendo H = 1+ 1/2 + 1/3 + 1/4 + ... + 1/N. Faça um programa que calcule o valor de H com N termos.

#include <iostream> 
using namespace std;

int main() {
    int num, i;
    float h = 0.0;
    
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    for (i = 1; i <= num; i++) {
        h += (1.0 / i); // Para float, sempre usar o ponto flutuante.
    }
    
    cout << "H = " << h << endl;

    return 0;
}
