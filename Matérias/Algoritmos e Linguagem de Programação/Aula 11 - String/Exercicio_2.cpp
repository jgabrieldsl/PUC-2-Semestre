// Exercício 2 - Faça um programa em C que lê uma string de no máximo 10 caracteres e no final imprime quantas letras ‘a’ tem essa string.

#include <iostream>
#include <string> // 
#include <cctype>
using namespace std;

string to_minuscula (string palavra) {
    // Passando para minuscula --> <cctype>
    for (int i = 0;  palavra[i] != '\0'; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    return palavra;
}

int cont_letrasa (string palavra) {
    int cont = 0;
    // Range-based for loop" ou "loop baseado em intervalo". Uusado para iterar sobre cada elemento de um container, como uma string, vetor, lista, etc.
    for (char i : palavra) {
        if (i == 'a') {
            cont++;
        }
    }

    return cont;
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

    palavra = to_minuscula(palavra);
    int cont = cont_letrasa (palavra);
    

    cout << "A string: " << palavra << endl;
    cout << "Quantidade de letras A: " << cont << endl;

    
    return 0;
}