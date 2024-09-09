/* Exercício 1 - (Desafio) Fazer um programa que calcule o valor de N! (fatorial de N), sendo que o valor inteiro de N deve ser lido. Lembrando que:
    - N! = 1 x 2 x 3 x .... x (N – 1) x N ;
    - 0! = 1, por definição.
    
*/

#include <iostream>
using namespace std;

int main () {
    
    int num, i, fatorial = 1;
    
    cout << "Digite um número para calcular seu fatorial: ";
    cin >> num;
    
    for (i = num; i > 0; i--) {
        fatorial *= i;
    }
    
    cout << "O fatorial de num é: " << fatorial << endl;
    
    return 0;
}