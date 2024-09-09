// Exercício 3 - Ler um vetor A com 10 elementos inteiros correspondentes às idades de um grupo de pessoas. Escrever um programa que determine e escreva a idade média e quantos elementos são menores que a média.

#include <iostream>
using namespace std;

int main() {
    
    int A[10], soma = 0, cont = 0;
    double media;
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite a idade da " << i + 1 << "° pessoa: ";
        cin >> A[i];
        
        soma += A[i];
        media = soma / 10;
        
    }
    
    for (int i = 0; i < 10; i++) {
        if (A[i] < media) {
            cont++;
        } 
    }
    
    cout << "Média: " << media << endl;
    cout << "Quantidade de elementos menores que a média: " << cont << endl;;
    
    return 0;
}
