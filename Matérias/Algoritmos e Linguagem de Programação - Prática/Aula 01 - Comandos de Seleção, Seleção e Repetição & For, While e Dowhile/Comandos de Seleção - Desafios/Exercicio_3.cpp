/* 

Exercício 3 - (Desafio)  Desenvolver  um  algoritmo  para  ler  um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:

    - y = x , se x < 1 ;
    - y = 0 , se x = 1 ;
    - y = x² , se x > 1 ;
    
*/


#include <iostream>
using namespace std;

int main() {
    
    float x, y;
    
    cout << "Digite X: ";
    cin >> x;
    
    if (x < 1) y = x;
    else if (x == 1) y = 0;
    else if (x > 1) y = x*x;
    
    cout << "O valor de Y, de acordo com a regra, é igual a: " << y << endl;
    
    return 0;
}
