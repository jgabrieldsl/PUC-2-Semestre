// Exercício 1 - Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], [51,75], e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.

#include <iostream>
using namespace std;

int main () {
    
    int num, i, numdigitado, cont25 = 0, cont50 = 0, cont75 = 0, cont100 = 0;
    
    cout << "Digite quantos números quer digitar: ";
    cin >> num;
    
    for (i = 1; i <= num; i++) {
        cout << "Digite o " << i << "° número: ";
        cin >> numdigitado;
        
        if (numdigitado < 26 && numdigitado > -1 ) cont25++;
        
        else if (numdigitado < 51) cont50++;
        
        else if (numdigitado < 76) cont75++;
        
        else if (numdigitado < 101) cont100++;
        
    }
    
    cout << "Números no intervalo 0 a 25: " << cont25 << endl;
    cout << "Números no intervalo 26 a 50: " << cont50 << endl;
    cout << "Números no intervalo 51 a 75: " << cont75 << endl;
    cout << "Números no intervalo 76 a 100: " << cont100 << endl;
    
    return 0;
}
