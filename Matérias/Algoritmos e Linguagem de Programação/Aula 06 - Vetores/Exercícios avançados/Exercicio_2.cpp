// Exercício 2 - Ler um vetor de inteiros positivos com 15 posições. Imprimir a quantidade de números pares e a quantidade de múltiplos de 5.

#include <iostream>
using namespace std;

int main() {
    
    int vetor[15], cont_par = 0, cont_cinco = 0;
    
    for (int i = 0; i < 15; i++) {
        
        cout << "Digite o " << i + 1 << "° número do vetor: ";
        cin >> vetor[i];
        
        if (vetor[i] % 2 == 0) {
            cont_par++;
        }
        
        if (vetor[i] % 5 == 0) {
            cont_cinco++;
        }
        
    }
    
    cout << "Números pares: " << cont_par << endl;
    cout << "Múltiplos de 5: " << cont_cinco << endl;
    
    return 0;
}
