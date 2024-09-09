// Exercício 7 - Uma empresa paga aos seus empregados um salário de R$1.500,00 por mês mais uma comissão de R$200,00 por cada carro vendido e mais 5% do valor da venda. Construa um programa para calcular o salário do mês de um funcionário, de acordo com o descrito acima. Para o cálculo da comissão e do adicional de 5% do valor da venda, o programa deverá ler o número de carros vendidos e o valor total das vendas, do empregado, nome e imprimir de forma bem explicativa o salário do funcionário:

#include <iostream>
using namespace std;

int main () {
    double valor_vendas;
    int qtd_carros, salario = 1500, comissao = 200; 
    string nome_funcionario;
    
    cout << "Digite seu nome: ";
    cin >> nome_funcionario;
    
    cout << "Quantos carros foram vendidos?: ";
    cin >> qtd_carros;
    
    cout << "Qual o valor total em vendas?: R$";
    cin >> valor_vendas;
    
    comissao = comissao * qtd_carros;
    valor_vendas = valor_vendas * 0.05;
    
    cout << "Nome do funcionário: " << nome_funcionario << endl;
    cout << "Comissão: R$" << comissao << endl;
    cout << "Adicional: R$" << valor_vendas << endl;
    cout << "Salário fixo: R$" << salario << endl;
    cout << "Salário no mês: R$" << salario + comissao + valor_vendas;
    
    return 0;
}