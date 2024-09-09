/* Exercício 3 - 3. Um funcionário irá receber um aumento de acordo com o seu plano de trabalho de acordo com a tabela abaixo:
    
    
    | Plano | Aumento |
    | --- | --- |
    | 1 | 10% |
    | 2 | 15% |
    | 3 | 20% |
    
    Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu novo salário.

*/

#include <iostream>
using namespace std;

int main() {
    int plano;
    float salario;
    
    cout << "Digite seu plano de trabalho: ";
    cin >> plano;
    cout << "Digite seu salário atual: ";
    cin >> salario;
    
    if (plano == 1) {
        salario = salario * 1.1;
    }
    
    else if (plano == 2) {
        salario = salario * 1.15;
    }
    
    else {
        salario = salario * 1.2;
    }
    
    cout << "Seu novo salário é igual a: R$" << salario;
    
    
    return 0;
}
