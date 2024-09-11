// Exercício 6 - Elabore um programa que leia uma string de no máximo 10 caracteres. O programa deverá imprimir a string sem suas vogais

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVogal (char i) {
    char vogais[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (char c : vogais) {
        if (i == c) {
            return true;
        }
    }
    return false;
}

string tirar_vogais ( string palavra) {
    string resultado(0, ' ');
    
    for (char i : palavra) {
        if (!isVogal(i)) {
            resultado += i;
        }
    }
    return resultado;
}

int main () {
    string palavra;

    while (true) {
        cout << "Digite uma palavra: ";
        getline(cin, palavra);

        if (palavra.size() > 10) {
            cout << "Digite uma palavra de até 10 caracteres!" << endl;
            continue;
        } else {
            break;
        }
    }

    string resultado = tirar_vogais(palavra);
    cout << "A string sem suas vogais: " << resultado << endl;

    return 0;
}