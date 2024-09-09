// Exercício 2 - Determine a área de um triângulo 

#include <iostream>

int main() {
    float base, altura;
    
    std::cout << "Digite a base e a altura do triângulo: ";
    std::cin >> base >> altura;
    
    float area = (base * altura) / 2.0;
    
    std::cout << "A area do triângulo é igual a: " << area << "\n";
    
    return 0;
}