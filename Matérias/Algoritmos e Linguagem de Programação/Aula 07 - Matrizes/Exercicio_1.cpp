// Exercício 1 - Faça um algoritmo que leia uma matriz M 5x5 de números reais. O programa deve determinar o maior número da matriz e a sua posição (linha, coluna).

#include <iostream>
using namespace std;

int main() {
    
    #define N 2
    int matriz[N][N], maior = -99999, linha, coluna;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Digite o número da " << i + 1 << "° linha e " << j + 1 << "° coluna: ";
            cin >> matriz[i][j];
            
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i + 1;
                coluna = j + 1;
            }
        }    
    }
    
    cout << "Maior elemento da matriz: " << maior << endl;
    cout << "Linha " << linha << " e coluna " << coluna << endl; 
    
    return 0;
}
