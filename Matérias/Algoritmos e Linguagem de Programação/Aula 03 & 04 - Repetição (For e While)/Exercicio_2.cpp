// Exercício 2 - Elabore um programa que leia vários números, até o usuário digitar 0. O programa deverá imprimir quantos números foram lidos, qual é o maior e o menor.

#include <iostream>
using namespace std;

int main() {
    int num, i, j = 1, maior = -9999999, menor = 9999999, cont;
    
    for (i = 0 ; j > 0 ; cont++) {
        cout << "Digite um número: ";
        cin >> num;
        
        if (num == 0) {
            break;
        }
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
        
    }
    
    cout << "Números digitados: " << cont << "\nMaior: " << maior << "\nMenor: " << menor;
    
    return 0;
}