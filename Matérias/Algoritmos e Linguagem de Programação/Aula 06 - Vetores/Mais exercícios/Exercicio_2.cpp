// Exercício 2 - Ler um vetor X com N inteiros (máximo 20). Gerar e imprimir um segundo vetor com os valores de X em ordem inversa.

#include <iostream>
using namespace std;

int main() {
    int num, num_digitado, soma = 0;
    
    while (true) {
        cout << "Digite quantos elementos: ";
        cin >> num;
        
        if (num > 20) {
            cout << "Digite um valor menor ou igual a 20." << endl;
            continue;
        }
        
        break;
    }
    
    int X[num], Y[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
 
    
    for (int i = 0; i < num; i++) {
        Y[i] = X[i];
    }
    
    // Imprimindo em ordem inversa
    for (int i = num - 1; i >= 0; i--) {
        cout << Y[i] << " ";
    }
    
    return 0;
}
