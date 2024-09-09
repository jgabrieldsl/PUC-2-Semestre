// Exercício 4 - Fazer  um  programa  em  C  para  ler  um  vetor  de  inteiros positivos de 15 posições, no máximo. Imprimir a quantidade de números pares e a quantidade de múltiplos de 5.

#include <iostream>
using namespace std;

int main() {
    int num_digitado, contpares, cont5;
    int num = 15;
    int X[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
    
    for (int i = 0; i < num; i++) {
        if (X[i] % 2 == 0) {
            contpares++;
        }
        
        if (X[i] % 5 == 0) {
            cont5++;
        }
    }
    
    cout << "Quantidade de elementos pares: " << contpares << endl;
    cout << "Quantidade de elementos múltiplos de 5: " << cont5 << endl;
    
    return 0;
}