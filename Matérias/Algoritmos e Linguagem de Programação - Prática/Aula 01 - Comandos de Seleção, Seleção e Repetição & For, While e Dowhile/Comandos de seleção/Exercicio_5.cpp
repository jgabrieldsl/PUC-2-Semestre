// Exercício 5 - Crie um algoritmo que receba do usuário um número qualquer e verifique se esse é múltiplo de 5

#include <iostream>
using namespace std;

int main() {  
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if (num % 5 == 0) cout << "O número é múltiplo de 5! ";
    else cout << "O número não é múltiplo de 5! "; 
    
    return 0;
}