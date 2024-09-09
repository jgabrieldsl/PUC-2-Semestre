// Exercício 3 - Elabore um programa que contenha uma função que dado um número inteiro natural ela retorne o seu fatorial.

#include <iostream>
using namespace std;

int fatorial (int a) {
	for (int i = a - 1; i > 0; i--) {
		a *= i;
	}
    return a;
} 

int main () {
    int num;
	cout << "Digite um número: ";
	cin >> num;
	cout << fatorial(num);		
}
