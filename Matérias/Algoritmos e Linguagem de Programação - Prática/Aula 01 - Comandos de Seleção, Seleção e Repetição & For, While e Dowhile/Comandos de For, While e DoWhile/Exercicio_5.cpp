// Exercício 5 - Escreva um programa que calcule e imprima o valor de S = (1/1) + (3/2) + (5/3) + (7/4) + ... + (99/50)

#include <iostream>
using namespace std;

int main() {
    double i, k, s = 0.0;;
    
    for (i = 1, k = 1; i <= 99 && k <= 50; i += 2, k++) {
        s += i / k;
    }
    cout << "O valor de S é: " << s;

    return 0;
}