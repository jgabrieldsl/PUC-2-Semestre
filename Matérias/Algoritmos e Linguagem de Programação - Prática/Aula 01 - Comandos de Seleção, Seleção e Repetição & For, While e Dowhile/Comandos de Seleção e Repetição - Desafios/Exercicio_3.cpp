// Exercício 3 - (Desafio) Chico tem 150 metros e cresce 2 centímetros por ano enquanto Zé tem 110 metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.

#include <iostream>
using namespace std;

int main () {
    
    int chico = 150, ze = 110, cresce_ze = 3, cresce_chico = 2, cont = 0;
    
    while (ze <= chico) {
        ze += cresce_ze;
        chico += cresce_chico;
        cont ++;
    }
    
    cout << "Serão necessários " << cont << " anos para que Zé sejá maior que Chico!";
    
    return 0;
}
