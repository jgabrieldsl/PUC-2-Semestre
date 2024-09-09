// Exercício 6 - Construir um programa que faz a leitura de dois valores inteiros A e B. Se os valores forem iguais deverá somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela

#include <iostream>
using namespace std;

int main() {  
    int num1, num2, c;
    
    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;
    
    if (num1 == num2) c = num1 + num2;
    else c = num1 * num2;
    
    cout << "O valor de C é " << c;

    return 0;
}