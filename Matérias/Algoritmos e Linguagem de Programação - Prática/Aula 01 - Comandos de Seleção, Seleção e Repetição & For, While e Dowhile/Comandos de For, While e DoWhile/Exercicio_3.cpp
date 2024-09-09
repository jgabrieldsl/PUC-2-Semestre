// Exercício 3 - Escreva um programa que solicite 10 números ao usuário e, ao final, mostre os dois maiores números digitados pelo usuário.

#include <iostream>
using namespace std;

int main() {
    
    int vetor[10];
    int num, i, maior2, maior = -99999;
    
    for (i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> vetor[i];
        
        if (vetor[i] > maior) {
            maior2 = maior;
            maior = vetor[i];
            
        } else if (vetor[i] > maior2 && vetor[i] < maior) {
            maior2 = vetor[i];
        }
        
    }
    
    cout << "Maior: " << maior << endl;
    cout << "Segundo maior: " << maior2;
    
    return 0;
    
}
