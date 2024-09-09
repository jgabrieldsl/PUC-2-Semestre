// Exercício 2 - (Desafio) Construir um programa que faz a leitura de três número inteiros e imprime o maior

#include <iostream>
using namespace std;

int main() {
    
    int num, num2, num3, i, number, maior = -999999, j;
    
    for (i=0; i < 3; i++) {
        cout << "Digite o " << i+1 << "° número: ";
        cin >> number;
        
        num = num2;
        num2 = num3;
        num3 = number;
        
        int vetor[3] = {num, num2, num3};
        
        for (j=0; j < 3; j++) {
            if (vetor[j] > maior) {
                maior = vetor[j];
            } 
        } 
    }
    
    cout << "O maior valor digitado é: " << maior;
    
    return 0;
}