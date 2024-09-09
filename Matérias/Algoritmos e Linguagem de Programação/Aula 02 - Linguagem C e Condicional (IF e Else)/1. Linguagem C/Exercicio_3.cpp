// Exercício 3 - Faça um programa para receber um número inteiro representando segundos e imprimir a quantidade correspondente em horas, minutos e segundos.

#include <iostream>
using namespace std;

int main () {
	int segundos;
    cout << "Digite a quantidade de segundos: " ;
    cin >> segundos;
    
    double minutos = segundos / 60.00;
    double horas = minutos / 60.00;
    
    cout << "Segundos: " << segundos << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Hora(s): " << horas ;

    return 0;
}
