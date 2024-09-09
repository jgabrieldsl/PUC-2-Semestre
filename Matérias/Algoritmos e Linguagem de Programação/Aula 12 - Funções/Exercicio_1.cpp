// Exercício 1 - Elabore um programa que possua uma função que recebe um valor inteiro e verifica se o valor é par. A função deve retornar um booleano e o resultado deverá ser impresso no programa principal.

#include <iostream>
using namespace std;

bool epar(int a) {
    return (a%2==0);
} 

int main () {
    int num, a;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if (epar(num)) cout << "É par!";
    else cout << "Não é par";
    
    return 0;    
}