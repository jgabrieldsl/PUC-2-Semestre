// Exercício 1 - Elabore um programa que leia um caractere e uma string de no máximo 20 caracteres. O programa deverá determinar o número de vezes que esse caractere aparece na string.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char caractere;
    char palavra[20];
    
    cout << "Digite um caractere: ";
    cin >> caractere;
    cin.ignore();
    
    
    
    cout << "Digite uma palavra: ";
    fgets(palavra, 20, stdin);

    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == caractere) cont++;
    }

    cout << "A quantidade de caracteres '" << caractere << "' na palavra: " << cont;
    
    return 0;
}