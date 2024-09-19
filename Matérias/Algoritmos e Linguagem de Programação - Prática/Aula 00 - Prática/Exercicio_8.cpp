/* Exercício 8 - Uma certa importância será dividida entre três ganhadores de um concurso. Sendo que da quantia total:

• O primeiro ganhador recebera 46%; 

• O segundo recebera 32%; 

• O terceiro recebera o restante;

Elabore um programa que dado o valor do concurso em reais ele calcule e imprima a quantia ganha por cada um dos ganhadores */

#include <iostream>
using namespace std;

int main () {
    double valor;

    cout << "Digite a quantia total do concurso: ";
    cin >> valor;

    cout << "O primeiro colocado irá receber: " << valor * 0.46 << endl;
    cout << "O segundo colocado irá receber: " << valor * 0.32 << endl;
    cout << "O terceiro colocado irá receber: " << valor * 0.22 << endl;

    return 0;
}