// Exercício 3 - Elabore um programa que leia vários números inteiros até o usuário digitar um número negativo. Para cada número lido deverá ser calculado e impresso seu fatorial.

#include <iostream>
using namespace std;

int main() {
    
    int num;
    
    while (true) {
        cout << "Digite um número inteiro positivo para calcular seu fatorial: ";
        cin >> num;
        
        if (num < 0) break;
        
        unsigned long long fatorial = 1;
        
        for (int i = num ; i > 0 ; i--) {
            fatorial = fatorial * i;
        }
        
        cout << "O fatorial de " << num << " é " << fatorial << endl; 
        
    }
    
    return 0;
}