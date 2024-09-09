// Exercício 1 - Ler um vetor de inteiros com 10 posições. Escrever o valor e a posição do maior e menor elementos lidos.

#include <iostream>
using namespace std;

int main() {
    
    int vetor[10], maior = -99999, menor = 99999, pos_maior, pos_menor;
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor: ";
        cin >> vetor[i];
        
        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }
    
    cout << "O maior número do vetor: " << maior << endl << "Posição do maior: " << pos_maior + 1 << endl;
    cout << "O menor número do vetor: " << menor << endl << "Posição do menor: " << pos_menor + 1 << endl;
    
    return 0;
}
