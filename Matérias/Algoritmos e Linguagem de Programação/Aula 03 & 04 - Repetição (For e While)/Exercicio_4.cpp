// Exercício 4 - Um usuário deseja utilizar um sistema protegido por senha. Ele tem 3 tentativas para acertar a senha correta. Defina uma senha e faça um programa que solicite a senha do usuário. Enquanto ele não acertar, o programa deverá imprimir “Acesso negado”. Caso contrário, deverá imprimir “Acesso liberado”.

#include <iostream>
using namespace std;

int main() {
    int i;
    string senhadigitada, senha = "@Joao10";
    
    for (i = 0 ; i < 3 ; i++) {
        cout << "Digite a senha para entrar no sistema: ";
        cin >> senhadigitada;
        
        if (senhadigitada != senha) {
            cout << "Acesso negado" << endl;
            if (i == 1) {
                cout << "Você tem apenas mais uma tentativa!" << endl;
            }
        }
        
        else {
            cout << "Acesso liberado";
            break;
        }
        
        if (i == 2) {
            cout << "Limite de tentativas excedido, tente novamente em um outro momento.";
        }
    }
    return 0;
}
