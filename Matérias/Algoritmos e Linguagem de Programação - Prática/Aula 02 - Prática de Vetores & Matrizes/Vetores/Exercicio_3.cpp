// Exercício 3 - Ler	um	vetor de inteiros	10 posições. Escrever a seguir o  valor e a posição do maior e menor elementos lidos.

#include <iostream>
using namespace std;

int main() {
    int num_digitado, pos_maior, pos_menor;
    int maior = -9999;
    int menor = 99999;
    
    int X[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
    
    for (int i = 0; i < 10; i++) {
        if (X[i] > maior) {
            maior = X[i];
            pos_maior = i + 1;
        }
        
        if (X[i] < menor) {
            menor = X[i];
            pos_menor = i + 1;
        }
        
    }
    
    cout << "O maior elemento: " << maior << endl;
    cout << "O menor elemento: " << menor << endl;
    cout << "Posição do maior elemento: " << pos_maior << endl;
    cout << "Posição do menor elemento: " << pos_menor << endl;
    
    return 0;
}