// Exercício 1 - Desafio: Implemente um código em C que receba os 12 coeficientes (matriz M e vetor igualdade) do sistema linear 3x3 e imprima o vetor solução. https://jgabsx.notion.site/Aula-03-Resolvendo-Sistemas-Lineares-3x3-em-C-Implementa-o-e-Impress-o-da-Solu-o-Vetorial-62d44f8930244dc2abbf488a0dfc752c

#include <iostream>
using namespace std;

#define N 3
double Matriz[N][N], matrizAdj[N][N], MatrizInversa[N][N], det ;
double vetorIgualdade[N];

void constroiMatriz() {
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Digite o termo da " << i + 1 << "° linha e " << j + 1 << " coluna: ";
            cin >> Matriz[i][j];
        }
    }
}

void constroiIgualdade () {
    for (int i = 0; i < N; i++) {
        cout << "Digite o " << i + 1 << "° termo do Vetor Igualdade: ";
        cin >> vetorIgualdade[i];
    }
}

void determinante () {
    double det = ( Matriz[0][0] * Matriz[1][1] * Matriz[2][2] ) + ( Matriz[0][1] * Matriz[1][2] * Matriz[2][0] ) + ( Matriz[0][2] * Matriz[1][0] * Matriz[2][1] ) - ( Matriz[0][0] * Matriz[1][2] * Matriz[2][1]) - ( Matriz[0][1] * Matriz[1][0] * Matriz[2][2] ) - ( Matriz[0][2] * Matriz[1][1] * Matriz[2][0] );
}

void matrizAdjunta () {

    matrizAdj[0][0] = (Matriz[1][1] * Matriz[2][2] - Matriz[1][2] * Matriz[2][1]);
    matrizAdj[0][1] = (Matriz[0][2] * Matriz[2][1] - Matriz[0][1] * Matriz[2][2]);
    matrizAdj[0][2] = (Matriz[0][1] * Matriz[1][2] - Matriz[0][2] * Matriz[1][1]);
    
    matrizAdj[1][0] = (Matriz[1][2] * Matriz[2][0] - Matriz[1][0] * Matriz[2][2]);
    matrizAdj[1][1] = (Matriz[0][0] * Matriz[2][2] - Matriz[0][2] * Matriz[2][0]);
    matrizAdj[1][2] = (Matriz[0][2] * Matriz[1][0] - Matriz[0][0] * Matriz[1][2]);
    
    matrizAdj[2][0] = (Matriz[1][0] * Matriz[2][1] - Matriz[1][1] * Matriz[2][0]);
    matrizAdj[2][1] = (Matriz[0][1] * Matriz[2][0] - Matriz[0][0] * Matriz[2][1]);
    matrizAdj[2][2] = (Matriz[0][0] * Matriz[1][1] - Matriz[0][1] * Matriz[1][0]);
 
}

void MatrizInversa () {
	// Exercício não finalizado
}



int main() {
    
    // Monta a Matriz principal
    constroiMatriz();

    // Monta o vetor igualdade
    constroiIgualdade();

    // Calcula o Determinante
    determinante();

    // Monta a Matriz Adjunta
    matrizAdjunta();

    
    return 0;
}