// Exercício 4 - Calcule o volume do cubo 

#include <iostream>
using namespace std;

int main () {
    int lado;
    cout << "Qual a medida do lado do cubo?: ";
    cin >> lado;

    double volume = lado * lado * lado;

    cout << "Volume do cubo: " << volume;
}