// Exercício 1 - Elabore um programa que leia um caractere e uma string de no máximo 20 caracteres. O programa deverá determinar o número de vezes que esse caractere aparece na string.

#include <iostream>
#include <string> // Biblioteca String - A classe std::string gerencia automaticamente a memória necessária para armazenar os caracteres. Você não precisa alocar um tamanho fixo ou se preocupar com estouros de buffer, pois a std::string ajusta seu tamanho dinamicamente conforme necessário.
using namespace std;

int main() {
    char caractere;
    string palavra;
    
    cout << "Digite um caractere: ";
    cin >> caractere;
    cin.ignore();

    cout << "Digite uma palavra: ";
    getline(cin, palavra);

    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == caractere) cont++;
    }

    cout << "A quantidade de caracteres '" << caractere << "' na palavra: " << cont;
    
    return 0;
}