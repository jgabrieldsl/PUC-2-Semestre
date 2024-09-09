// Exercício 4 - Escreva um programa que calcule x elevado a n. Considere que n é um valor inteiro não negativo. PROIBIDO USAR QUALQUER FUNÇÃO MATEMÁTICA EXISTENTE

#include <iostream>
using namespace std;

int main() {
    
    int num, n, elevado = 1, i;
    cout << "Digite um valor: ";
    cin >> num;
    
    cout << "Você quer elevar esse número a qual valor(n)?:  ";
    cin >> n;
    
    for (i = 0; i < n; i++) {
        if (n == 0) elevado = 1;
        else elevado *= num;
    }
    
    cout << "Resultado: " << elevado;
    
    return 0;
}