// Exercício 9 - Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.

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