/* Exercício 11 - (Desafio) - Faça um programa que peça um número inteiro positivo e em seguida mostre este número invertido.
Exemplo: 2349 → 9432
*/

#include <iostream>

using namespace std;

int main() {
    int num, digitodireita, reverso;

    cout << "Digite um número inteiro positivo: "; // 32
    cin >> num;

    int original = num;
    
    while (num > 0) {
        digitodireita = num % 10; // Pegando o digito da direita
        reverso = reverso * 10 + digitodireita; // Fazendo o inverso do número
        num = num / 10; // Removendo o número mais a direita
    }
    
    cout << "Número invertido: " << reverso << endl;

    return 0;
}
