/*

Exercício 2 - Leia o código de um determinado produto e mostre sua classificação. Utilize a seguinte tabela como referência.

| Código | Classificação |
| --- | --- |
| 1 | Não perecível |
| 2, 3 ou 4 | perecível |
| 5 ou 6 | Vestuário |
| 7 | Higiene pessoal |
| 8 a 15 | Limpeza e Utensílios Domésticos |
| Qualquer outro código | Código inválido |

*/

#include <iostream>
using namespace std;

int main() {
    int cod;
    cout << "Digite o código do produto: ";
    cin >> cod;
    
    if (cod == 1) {
        cout << "Produto não perecível!";
    }
    
    else if (cod == 2 || cod == 3 || cod == 4) {
        cout << "Produto perecível!";
    }
    
    else if (cod == 5 || cod == 6) {
        cout << "Produto de Vestuário!";
    }
    
    else if (cod == 7) {
        cout << "Produto de higiene pessoal!";
    }
    
    else if (cod >= 8 && cod <= 15) {
        cout << "Produto de Limpeza e Utensílios Domésticos!";
    }
   
    else {
        cout << "Código inválido";
    }
    
    return 0;
}