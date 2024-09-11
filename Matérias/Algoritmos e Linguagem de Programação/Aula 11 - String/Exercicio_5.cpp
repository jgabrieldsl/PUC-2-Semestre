// Exercício 5 - Elabore  um  programa  que  leia  um  nome  completo  de até  100  caracteres  e  imprima  as  iniciais  deste  nome. Exemplo:  João  Carlos  Nascimento  da  Silva,  será  impresso JCNDS.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string pegar_initials (string a) {
    // Definindo o tamanho da string para conseguir adicionar char's nela.
    string iniciais(0, ' ');
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == ' ') {
            char chare = a[i + 1];
            iniciais = iniciais + chare;
        }
    }
    return a[0] + iniciais;
}

int main () {
    string nomecompleto;

    while (true) {
        cout << "Digite seu nome completo: ";
        getline(cin, nomecompleto);

        if (nomecompleto.size() > 100) {
            cout << "Digite um nome de até 100 caracteres!" << endl;
            continue;
        } else {
            break;
        }
    }

    cout << "Nome completo: " << nomecompleto << endl;
    cout << "Iniciais: " << pegar_initials(nomecompleto) << endl;

    return 0;
}