// Exercício 9 - Elabore um programa que faça a simulação de um caixa de uma loja. O usuário deverá digitar o Valor da Compra, o Valor Pago pelo cliente. O programa irá retornar o valor do troco, as cédulas que fazem parte do troco e a quantidade de cada cédula. Para este programa considere as cédulas de R$20, R$10, R$5 e R$1 real Considere a possibilidade de não haver troco

#include <iostream>
using namespace std;

int main () {
    double valor_compra, pago, troco, nota_20 = 0, nota_10 = 0, nota_5 = 0, nota_1 = 0;
    cout << "Digite o valor da compra: ";
    cin >> valor_compra;
    cout << "Digite o valor pago pelo cliente: ";
    cin >> pago;

    if (valor_compra == pago) {
        troco = 0;
    } else {
        
    troco = pago - valor_compra;
    

    cout << "Valor da compra: R$" << valor_compra << endl;
    cout << "Troco: R$" << troco << endl;

    cout << "Cédulas de R$20: " << nota_20 << endl;
    cout << "Cédulas de R$10: " << nota_10 << endl;
    cout << "Cédulas de R$5: " << nota_5 << endl;
    cout << "Cédulas de R$1: " << nota_1 << endl;}
    
    return 0;
}