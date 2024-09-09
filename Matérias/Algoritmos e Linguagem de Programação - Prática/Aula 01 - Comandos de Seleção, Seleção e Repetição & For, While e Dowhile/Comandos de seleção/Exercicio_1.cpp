// Exercício 1 - Elabore um programa que leia um número inteiro e imprima se ele é par ou ímpar

#include <iostream>
using namespace std;

int main() {   
    int num;
    cout << "Digite um número inteiro";
    cin >> num;
    
    if (num % 2 == 0) cout << "O número é par";
    else cout << "O número é impar.";
    
    return 0;
}