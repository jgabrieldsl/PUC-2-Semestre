/*
Exercício 2 - Elabore um programa que contenha duas funções:
• Uma função que lê um número real e o retorna.
• E uma função que a partir do número real lido retorna a parte fracionária do mesmo.
*/

#include <iostream>
using namespace std;

double numeroreal () {
    double num;
	cout << "Digite um número real: ";
	cin >> num;
	return num;
}


int main () {
    double num;
    num = numeroreal();

    // Para calcular a parte inteira do número
    int inteira = static_cast<int> (num);
    num = num - inteira;
    
    cout << "A parte fracionária é: " << num << endl;
    
    return 0;    
}