// Construa um programa que leia o salário mensal atual de um funcionário e o percentual de reajuste. Determine o valor do novo salário e imprima os valores lidos e o novo salário.

#include <iostream>
using namespace std;

int main () {
	double salario, perc_reajuste;
	
	cout << "Digite o salário atual: ";
	cin >> salario;
	cout << "Digite o percentual de reajuste: ";
	cin >> perc_reajuste;
	
	cout << "Salário: " << salario << endl;
	cout << "Novo salário: " << salario * ((perc_reajuste/100) + 1);

    return 0;
}
