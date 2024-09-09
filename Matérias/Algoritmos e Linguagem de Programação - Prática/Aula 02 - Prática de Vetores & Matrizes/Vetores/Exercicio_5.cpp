// Exercício 5 - Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos números são maiores que 30.

#include <iostream>
using namespace std;

int main() {
    int num_digitado, cont30;
    int num = 8;
    int X[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
    
    for (int i = 0; i < num; i++) {
        cout << X[i];
        if (i < num-1){
            cout << ", ";
        }
        if (X[i] > 30) {
            cont30++;
        }
        
    }
    
    cout << endl << "Quantidade de elementos maiores que 30: " << cont30 << endl;
    
    return 0;
}