// Exercício 1 - Ler dois vetores X e Y (ambos com N reais e tamanho máximo de 20). Multiplicar os respectivos pares de elementos, gerando um terceiro vetor Z. Imprimir os vetores X, Y e Z.

#include <iostream>
using namespace std;

int main() {
    int num, num_digitado;
    
    while (true) {
        cout << "Digite quantos elementos: ";
        cin >> num;
        
        if (num > 20) {
            cout << "Digite um valor menor ou igual a 20." << endl;
            continue;
        }
        
        break;
    }
    
    int X[num], Y[num], Z[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor Y: ";
        cin >> num_digitado;
        Y[i] = num_digitado;
    }
    
    for (int i = 0; i < num; i++) {
        Z[i] = X[i] * Y[i];
    }
    
    cout << "Conteúdo do vetor X: " << endl;
    for (int i = 0; i < num; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
    
    cout << "Conteúdo do vetor Y: " << endl;
    for (int i = 0; i < num; i++) {
        cout << Y[i] << " ";
    }
    cout << endl;
    
    cout << "Conteúdo do vetor Z: " << endl;
    for (int i = 0; i < num; i++) {
        cout << X[i] << " X " << Y[i] << " = ";
        cout << Z[i] << endl;
    }
    
    return 0;
}