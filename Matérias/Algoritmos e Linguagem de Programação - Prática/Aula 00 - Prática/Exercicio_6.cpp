// Exercício 6 - Faça um programa que dadas as medidas de uma sala em metro (comprimento e largura), bem como o preço do metro quadrado do carpete, informe o custo total para forrar o piso da sala


#include <iostream>
using namespace std;

int main () {
    double comprimento, largura, preco, custo_total;
    cout << "Qual o comprimento da sala?: ";
    cin >> comprimento;
    cout << "Qual a largura da sala?: ";
    cin >> largura;
    cout << "Qual o preço do m² do carpete?: ";
    cin >> preco;

    custo_total = (comprimento * largura) * preco;

    cout << "O custo total sera de: " << custo_total << endl;
    
    return 0;
}