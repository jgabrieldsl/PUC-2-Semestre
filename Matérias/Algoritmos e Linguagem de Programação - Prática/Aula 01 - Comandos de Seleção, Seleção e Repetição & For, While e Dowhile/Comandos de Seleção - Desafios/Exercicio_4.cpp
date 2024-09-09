// Exercício 4 - (Desafio)  Elabore um programa que leia os parâmetros a, b e c de uma equação quadrática e determine as raízes desta equação.

#include <iostream>
#include <cmath> // Biblioteca matemática

using namespace std;

int main() {
    
    float a, b, c;
    
    cout << "Digite os valores de A, B & C: ";
    cin >> a >> b >> c;
    
    float delta = (b*b) - (4 * a * c);
    
    if (delta < 0) {
        cout << "A equação não tem raízes reais para delta < 0!";
    }
    
    else if (delta == 0) {
        float x1 = (-b + sqrt(delta)) / (2*a);
        cout << "A equação tem uma raiz real e única, igual a " << x1;
        
    }
    
    else if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2*a), x2 = (-b - sqrt(delta)) / (2*a);
        cout << "A equação tem duas raízes reais e distintas, sendo X1 = " << x1 << " e X2 = " << x2;
    }
    
    return 0;
}
