// Exemplo - Construa um programa que faça a leitura de uma matriz quadrada de reais de tamanho N por N (máximo 20x20). Some todos os elementos da diagonal principal. Imprima a matriz lida e o valor da soma obtido.

#include <iostream>
using namespace std;

int main() {
    
    #define N 20
    int matriz[N][N], soma = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Digite o número da " << i + 1 << "° linha e " << j + 1 << "° coluna: ";
            cin >> matriz[i][j];
            
            if (i == j) {
                soma += matriz[i][j];
            }
        }    
    }
    
    cout << "Conteúdo da matriz: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Soma da diagonal principal: " << soma << endl;
    
    return 0;
}