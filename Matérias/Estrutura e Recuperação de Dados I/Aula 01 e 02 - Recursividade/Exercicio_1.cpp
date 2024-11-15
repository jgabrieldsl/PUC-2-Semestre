/* Exercício 1 - Elabore um programa que utilize recursividade que recebe um vetor de inteiros e retorna o mesmo vetor em ordem crescente. */

#include <iostream>
using namespace std;

#define N 5
int vetor[N] = {9, 10, 5, 12, 11};

/* Sem recursividade
void crescente(int vec[], int size) {

    // Ta certo, mas logo abaixo melhorei a lógica.
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vec[i] < vec[j]) {
                int menor = vec[i];
                vec[i] = vec[j];
                vec[j] = menor;                
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << vec[i] << " ";
    }
} */

/* Com recursividade */
void crescente(int vec[], int size) {
    if (size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            int temp = vec[i];
            vec[i] = vec[i + 1];
            vec[i + 1] = temp;
        }
    }
    crescente(vec, size - 1);
}

void mostrarVetor() {
    for (int i = 0; i < N; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    crescente(vetor, N);
    mostrarVetor();
    return 0;
}