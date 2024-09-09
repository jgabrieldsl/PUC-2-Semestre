// Exercício 6 - Escreva um programa que calcule e imprima o valor de S = (1/1) - (2/4) + (3/9) - (4/16) + ... - (10/100)

#include <iostream>
using namespace std;

int main() {
    double s = 0.0;
    
    for (int i = 1; i <= 10; i++) {
        double novoi = i;
        double formula = novoi / (novoi * novoi);
        
        if (i % 2 == 0) {
            s -= formula ;  
        } else {
            s += formula ; 
        }
    }
    cout << "O valor de S é: " << s;
    
    return 0;
    
}