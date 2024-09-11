// Exercício 4 - Faça um programa que leia o nome e sobrenome de uma pessoa. O programa deve escrever o nome e o sobrenome numa única string. Deverá ser impresso, a nova string, o tamanho dela a primeira e a última letra da string.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main () {
    string nome, sobrenome, nomecompleto;
    char p, u;
    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite seu sobrenome: ";
    getline(cin, sobrenome);

    // Concatenando
    nomecompleto = nome + ' ' + sobrenome;

    // Primeira letra
    p = nomecompleto[0];

    // Última letra
    u = nomecompleto[nomecompleto.size() - 1];


    cout << "Nome completo: " << nomecompleto << endl;
    cout << "Tamanho: " << nomecompleto.size() << endl;
    cout << "Primeira letra: " << p << endl;
    cout << "Última letra: " << u << endl;

    return 0;
}