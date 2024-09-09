// Exercício 3 - Faça um Programa que peça dois números e imprima o maior deles.

#include <iostream>
using namespace std;

int main() {  
    int num1, num2;
    
    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;
    
    if (num1 == num2) cout << num1 << "é igual a " << num2;
    else if (num1 > num2) cout << num1 << " é maior que " << num2;
    else cout << num2 << " é maior que " << num1;
    
    return 0;
}