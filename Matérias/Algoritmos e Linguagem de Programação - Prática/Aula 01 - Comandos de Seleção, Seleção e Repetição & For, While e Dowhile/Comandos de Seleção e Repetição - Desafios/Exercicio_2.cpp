// Exercício 2 - (Desafio) Fazer um programa que faz a leitura consecutiva de N números inteiros X. Construir um programa que identifica e imprime o MAIOR e o MENOR número entre os números digitados. O valor de N também deve ser digitado e deve ser maior ou igual a 10.

#include <iostream>
using namespace std;

int main () {
    
    int num, x, maior = -9999, menor = 9999;
    
    while (true) {
        cout << "Quantos número quer digitar? ";
        cin >> num;
        
        if (num > 10) {
            cout << "Digite um valor menor ou igual a 10!" << endl;
            continue;  
        } 
        else {
            break;
        }
    }
    
    for (int i = 1 ; i <= num; i++) {
        cout << "Qual o " << i << "° número? ";
        cin >> x;
        
        if (x > maior) maior = x;
        if (x < menor) menor = x;
        
    }
    
    cout << "O maior número é: " << maior << endl << "O menor número é: " << menor << endl;
    
    return 0;
}