// Exercício 6 - Escreva um algoritmo que leia n números inseridos pelo usuário (n é fornecido pelo usuário) e realize a soma dos números pares e conte quantos ímpares o usuário digitou. O resultado da soma dos pares e o número de ímpares digitados deverá ser impresso no final.

#include <iostream>
using namespace std;

int main() {
    
    int num, num_digitado, somapar = 0, cont = 0;
    
    cout << "Digite quantos números quer digitar: ";
    cin >> num;
    
    for (int i = 1 ; i < num+1 ; i ++) {
        cout << "Digite o " << i << "° número :";
        cin >> num_digitado;
        
        if (num_digitado % 2 == 0) {
            somapar += num_digitado;
        }
        
        else {
            cont++;
        }
    }
    
    cout << "Soma dos números pares: " << somapar << endl;
    cout << "Número ímpares digitados: " << cont << endl;
    
    return 0;
}
