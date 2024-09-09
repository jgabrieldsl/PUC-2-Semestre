// Exercício 1 - Leia um número inteiro e imprima o seu antecessor e seu sucessor 

#include <iostream>

int main() {
    int num, sucessor, antecessor;
    
    std::cout << "Digite um número: ";
    std::cin >> num;
    
    antecessor = num - 1;
    sucessor = num + 1;
    
    std::cout << "O antecessor do número é: " << antecessor << "\n";
    std::cout << "O sucessor do número é: " << sucessor << "\n";
    
    return 0;
}
