// Exercício 2 - Ler um vetor X com N inteiros (máximo 20) e multiplicar cada elemento por um inteiro K. Imprimir o vetor lido, o valor de K e o vetor multiplicado.

#include <iostream>
using namespace std;

int main() {
    int num, num_digitado, constante;
    
    while (true) {
        cout << "Digite quantos elementos: ";
        cin >> num;
        
        if (num > 20) {
            cout << "Digite um valor menor ou igual a 20." << endl;
            continue;
        }
        
        break;
    }
    
    int X[num];
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número do vetor X: ";
        cin >> num_digitado;
        X[i] = num_digitado;
    }
    
    cout << "Qual o valor da constante?: ";
    cin >> constante;
    
    for (int i = 0; i < num; i++) {
        cout << X[i] << " X " << constante << " = " <<  X[i] * constante << endl;
    }

    return 0;
}
