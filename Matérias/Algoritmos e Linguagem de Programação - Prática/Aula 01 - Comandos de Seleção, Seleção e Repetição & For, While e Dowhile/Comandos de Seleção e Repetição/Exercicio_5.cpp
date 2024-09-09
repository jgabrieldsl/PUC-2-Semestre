// Exercício 5 - Faça um programa que imprima os números inteiros de 100 a 450 que são múltiplos de 7.

#include <iostream>
using namespace std;

int main() {
    
    int i;
    for (i = 100; i <= 450; i++) {
        if (i % 7 == 0) cout << i << endl;
    }
    
    return 0;
}
