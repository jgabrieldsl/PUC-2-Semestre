// Exercício 1 - Ler um vetor X com N reais (máximo 20). Calcular e imprimir o somatório dos elementos.

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
    
    int X[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
 
    
    for (int i = 0; i < num; i++) {
        soma += X[i];
    }
    cout << "A soma dos elementos é: " << soma << endl;

    return 0;
}
