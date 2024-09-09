/* Exercício 1 - 1. (Desafio) Construir um programa que faz a leitura de duas notas de um aluno, N1 e N2, e os respectivos pesos, P1 e P2. O programa deve calcular a média ponderada alcançada por aluno e apresentar:
    - A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    - A mensagem "Reprovado", se a média for menor do que sete;
    - A mensagem "Aprovado com Distinção", se a média for igual a dez. */


#include <iostream>
using namespace std;

int main() {
    float N1, N2, P1, P2;
    
    cout << "Digite a 1° nota do aluno: ";
    cin >> N1;
    cout << "Digite o peso da 1° nota: ";
    cin >> P1;
    
    cout << "Digite a 2° nota do aluno: ";
    cin >> N2;
    cout << "Digite o peso da 2° nota: ";
    cin >> P2;
    
    float media = ( (P1 * N1) + (P2 * N2) ) / (P1 + P2);
    
    if (media == 10) {
        cout << "Aprovado com distinção! \nSua média: " << media;
    }
    
    else if (media >= 7) {
        cout << "Aprovado \nSua média: " << media;
    }
    
    else if (media < 7) {
        cout << "Reprovado! \nSua média: " << media;
    }

    return 0;
}