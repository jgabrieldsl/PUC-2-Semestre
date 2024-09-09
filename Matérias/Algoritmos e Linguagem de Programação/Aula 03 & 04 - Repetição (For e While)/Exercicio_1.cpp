/* Exercício 1 - 1. Os números primos possuem várias aplicações dentro da Computação, por exemplo na Criptografia. Um número primo é aquele que é divisível apenas por um e por ele mesmo.
    
    Faça um programa que:
    
    - Peça um número inteiro ao usuário
    - Determine se ele é ou não um número primo

*/

#include <iostream>
using namespace std; // Excluir o uso do "std::", informando a familia STD.

int main()
{
    int num, i;
    
    bool isValid = false;
    
    while (isValid == false) {
        cout << "Digite um número inteiro positivo: ";
        cin >> num;
        if (num > 0) {
            isValid = true;
        }
        else {
            cout << "Número inválido!\n";
        }
    }
    
    bool ePrimo = true;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            ePrimo = false;
            break;
        }
    }
    
    if (ePrimo == false){
        cout << num << " não é primo \n"; 
    }
    else {
        cout << num << " é primo \n"; 
    }

    return 0;
}