/*

Exercício 1 - Faça um programa que receba dois números e execute as operações listadas a seguir de acordo com a escolha do usuário.

| Escolha do usuário | Operação |
| --- | --- |
| 1 | Média entre os números digitados |
| 2 | Diferença do maior pelo menor |
| 3 | Produto entre os números digitados |
| 4 | Divisão do primeiro pelo segundo |

*/

#include <iostream>
using namespace std;

int main() {
    float  num, num2;
    int opcao;
    cout << "Digite dois números inteiros: ";
    cin >> num >> num2;
    
    cout << "\nO que você quer fazer? \n1. Média entre os números digitados\n2. Diferença do maior pelo menor\n3. Produto entre os números digitados\n4. Divisão do primeiro pelo segundo\n\n";
    cin >> opcao;
    
    if (opcao == 1) {
        cout << "\nResultado: " << float (num + num2) / 2;
    }
    
    else if (opcao == 2) {
        if (num > num2) cout << "\nResultado: " << num - num2;
        else cout << "\nResultado: " << num2 - num;
    }
        
    else if (opcao == 3) {
        cout << "\nResultado: " << num * num2;
    }
    else if (opcao == 4) {
        cout << "\nResultado: " << num / num2;
    }
    
    else {
        cout << "Opção inválida";
    }
    
    return 0;
}