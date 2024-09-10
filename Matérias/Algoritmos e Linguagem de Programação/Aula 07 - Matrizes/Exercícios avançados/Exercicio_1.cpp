/*
Elabore um programa que leia uma matriz de reais 10x10 e determine:

- A soma da linha 4.
- O menor elemento da coluna 5.
- O maior elemento da diagonal principal.

*/

#include <iostream>
using namespace std;

#define N 5
double matriz[N][N], soma4 = 0, menor_col5 = 9999, maior_diagonal = -9999;

int main() {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Digite o termo da " << i + 1 << "° linha e " << j + 1 << "° coluna ( números reais): ";
            cin >> matriz[i][j];

            // Soma da 4° linha
            if (i == 3) {
                soma4 += matriz[3][j];
            }

            // O menor elemento da coluna 5
            if (j == 4 && matriz[i][4] < menor_col5) {
                menor_col5 = matriz[i][j];          
            }

            // Maior elemento da diagonal principal
            if (i == j && matriz[i][j] > maior_diagonal) {
                maior_diagonal = matriz[i][j];
            }
            
        }
    }

    for (int i = 0; i < N; i++) {
        cout << i + 1 << "° linha: " ;
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }    
        cout << endl;
    }

    cout << "Soma da 4° linha: " << soma4 << endl;
    cout << "Menor da 5° coluna: " << menor_col5 << endl;
    cout << "Maior elemento da diagonal principal: " << maior_diagonal << endl;

    return 0;
}
