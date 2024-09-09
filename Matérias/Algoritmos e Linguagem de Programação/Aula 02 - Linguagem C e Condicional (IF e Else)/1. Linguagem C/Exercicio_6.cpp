// Exercício 6 - Escreva um programa que faça a leitura de um número inteiro de até 2 dígitos e imprima a soma dos dígitos. Considere que somente serão digitados números de 1 ou 2 dígitos.

#include <iostream>
using namespace std;

int main () {
	int num, direita = 0, esquerda = 0;
	
	while (true) {
    	cout << "Digite um número inteiro: ";
    	cin >> num;
    	if (num > 99) {
	        cout << "Digite um número de até 2 digitos!" << endl;
	        continue;
    	} else break;
	}
	
	direita = num % 10;
	esquerda = (num - direita) / 10;
	
	cout << "1° algarismo: " << esquerda << endl << "2° algarismo: " << direita << endl;
	cout << esquerda << " + " << direita << " é igual: " << esquerda + direita << endl;
	
  return 0;
}