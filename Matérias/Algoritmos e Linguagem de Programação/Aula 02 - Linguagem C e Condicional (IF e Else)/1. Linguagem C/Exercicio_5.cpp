// Exercício 5 - A loja “Fique Feliz” resolveu liquidar todos os seus produtos, para isso necessita de um programa que ajude a calcular os novos preços desses produtos. Elabore um programa que leia o preço de um produto, o valor do desconto (em porcentagem) e calcule o novo preço. Imprima o valor do produto, o desconto e o novo valor.

#include <iostream>
using namespace std;

double novopreco(double precodoproduto, double desconto) {
    double new_price = precodoproduto - (precodoproduto * (desconto / 100));
    return new_price;
}

int main () {
	double precodoproduto, desconto;
	
	cout << "Digite o preço do produto: ";
	cin >> precodoproduto;
	cout << "Digite a porcentagem de desconto: ";
	cin >> desconto;
	
	double new_price = novopreco(precodoproduto, desconto);
	
	cout << "O preço do produto: " << precodoproduto << endl;
	cout << "O desconto: " << desconto << "%" << endl;
	cout << "Novo preço do produto: " << new_price;
	
    return 0;
}
