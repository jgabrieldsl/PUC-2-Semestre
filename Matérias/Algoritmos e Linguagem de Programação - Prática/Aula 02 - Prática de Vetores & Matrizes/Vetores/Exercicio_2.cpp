// Exercício 2 - Elaborar um programa que leia um vetor de no máximo 15 elementos inteiros. O programa deverá imprimir o vetor e informar quantos números são maiores que 30.

#include <iostream>
using namespace std;

int main() {
    int num, num_digitado, cont;
    
    while (true) {
        cout << "Digite quantos elementos: ";
        cin >> num;
        
        if (num > 15) {
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
        if (X[i] > 30) {
            cont++;
        }
    }
    
    cout << "A quantidade de números maiores que 30 em X é: " <<  cont;
    
    return 0;
}
