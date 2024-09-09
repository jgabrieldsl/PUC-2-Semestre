// Exercício 4 - Escreva um programa que, utilizando a fórmula que converte um grau Fahrenheit em Celsius, imprime uma tabela com graus em Fahrenheit e Celsius, iniciando no grau 30 °F até 50 °F de 2 em 2 graus. Pesquise a fórmula na Internet. Fórmula: C = 9 / 5 * (F − 32)

#include <iostream>
using namespace std;

int main() {
    
    int fahrenheit;
    double celsius;
    
    for (int i = 30; i <= 50; i += 2) {
        fahrenheit = i;
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        
        cout << fahrenheit << "° fahrenheit = " << celsius << "° celsius" << endl;
        
    }
    
	  return 0;
}