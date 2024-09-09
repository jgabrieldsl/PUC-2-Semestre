// Exercício 3 - 

#include <iostream>

int main () {
    float salario, percentual;
    
    std::cout << "Digite o salário atual: ";
    std::cin >> salario;
    std::cout << "Digite o percentual de ajuste: ";
    std::cin >> percentual;
    
    salario = salario * ((percentual/100) + 1);

    std::cout << "O novo salário é igual a: " << salario;
    
    return 0;
}