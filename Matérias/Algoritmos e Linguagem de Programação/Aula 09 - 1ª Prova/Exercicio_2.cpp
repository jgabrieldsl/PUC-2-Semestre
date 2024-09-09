// Exercício 2 - Ler 10 números do usuário, adicionar em um vetor e separa-lo em dois vetores, um com números maiores ou igual a 50 e, o outro, com números menores que 50.

#include <iostream>
using namespace std;

int main()
{
    int numeros[10], maior50[10], menor50[10], i, num_digitado;
    int cont_maior = 0, cont_menor = 0;
    
    for (i = 0; i < 10; i++) {
        cout << "Digite um número: ";
        cin >> num_digitado;
        numeros[i] = num_digitado;
        
        if (num_digitado < 50) {
            menor50[cont_menor] = num_digitado;
            cont_menor++;
        } else {
            maior50[cont_maior] = num_digitado;
            cont_maior++;
        }
    }
    
    cout << "Todos os números: ";
    for (i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    cout << "Números maiores ou iguais a 50: ";
    for (i = 0; i < cont_maior; i++) {
        cout << maior50[i] << " ";
    }
    cout << endl;
    
    cout << "Números menores que 50: ";
    for (i = 0; i < cont_menor; i++) {
        cout << menor50[i] << " ";
    }
    
    return 0;
}
