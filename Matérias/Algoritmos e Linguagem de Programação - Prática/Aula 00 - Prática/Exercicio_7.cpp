// Exercício 7 - O índice de massa corpórea (IMC) de uma pessoa é igual ao peso (em quilogramas) dividido pelo quadrado de sua altura (em metros). Construa um programa que dados o peso e altura de uma pessoa, informe o valor de seu IMC 

#include <iostream>
using namespace std;

int main () {
    double peso, altura, imc;
    cout << "Digite seu peso (Kg): ";
    cin >> peso;
    cout << "Digite sua altura (Metros): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Seu IMC: " << imc << endl;
    
    return 0;
}