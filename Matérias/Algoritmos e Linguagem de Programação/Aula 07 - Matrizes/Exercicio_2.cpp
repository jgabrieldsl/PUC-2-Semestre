// Exercício 2 - Faça um algoritmo que leia uma matriz de inteiros 5x3 e construa sua transposta. O programa deverá imprimir as duas matrizes, a original e a transposta.

#include <iostream>
using namespace std;

int main() {
    #define I 5
    #define J 3
    int matriz[I][J], transposta[J][I];
    
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            cout << "Digite o número da " << i + 1 << "° linha e " << j + 1 << "° coluna: ";
            cin >> matriz[i][j];
            transposta[j][i] = matriz[i][j];
        }    
    }
    
    cout << endl << "Conteúdo da matriz: " << endl;
    for (int i = 0; i < I; i++) {
        for (int j = 0; j < J; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "Matriz transposta: " << endl;
    for (int i = 0; i < J; i++) {
        for (int j = 0; j < I; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}