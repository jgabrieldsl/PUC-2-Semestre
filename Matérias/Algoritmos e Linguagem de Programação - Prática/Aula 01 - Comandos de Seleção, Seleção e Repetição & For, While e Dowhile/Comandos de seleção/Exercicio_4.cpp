// Exercício 4 -  Faça um Programa que peça um valor e mostre na tela se o valor é positivo, negativo ou nulo.

#include <iostream>
using namespace std;

int main() {  
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if (num == 0) cout << "O valor é nulo! ";
    else if (num > 0) cout << "O valor é positivo! ";
    else cout << "O valor é negativo! ";
}