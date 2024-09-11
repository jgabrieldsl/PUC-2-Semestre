// Exercício 3 - Faça um programa que lê uma string de 5 caracteres e inverte esta string. No final o programa deverá imprimir a string original e a invertida.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string palavra;

string invert_palavra (string palavra) {

    string palavra_inv(palavra.size(), ' ');

    for (int i = 0; i < palavra.size(); i++) {
        palavra_inv[i] = palavra[palavra.size() - 1 - i]; // Pega a ultima posição de palavra - 1 (0 a 4) e - i a cada iteração.
    }
    return palavra_inv;
}

int main () {
    while (true) {
        cout << "Digite uma palavra: ";
        getline(cin, palavra);

        if (palavra.size() > 5) {
            cout << "Digite uma palavra de até 5 caracteres!" << endl;
            continue;
        } else {
            break;
        }
    }

    string palavra_inv = invert_palavra(palavra);

    cout << "A palavra: " << palavra << endl;
    cout << "A palavra invertida: " << palavra_inv << endl;

    return 0;
}
