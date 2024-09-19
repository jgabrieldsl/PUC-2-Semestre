// Exercício 5 - Elabore um programa que dada uma distância percorrida (em quilômetros), bem como o total de combustível gasto (em litros), informe o consumo do veículo 


#include <iostream>
using namespace std;

int main () {
    double distancia;
    cout << "Digite a distância percorrida: ";
    cin >> distancia;

    double combustivel;
    cout << "Digite, em litros, a quantidade de combustível gasto: ";
    cin >> combustivel;

    cout << "Seu carro faz " << distancia / combustivel << "KM por Litro!" << endl;
    
    return 0;
}