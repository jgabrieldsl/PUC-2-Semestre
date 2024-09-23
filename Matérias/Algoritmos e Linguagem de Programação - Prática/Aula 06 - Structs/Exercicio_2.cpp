/* 
    Exercício 2 - Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos:
        - RA - inteiro
        - Código da Disciplina - inteiro de 4 dígitos
        - Nota1 e Nota 2 – valores reais que podem ser armazenados na forma de um vetor de 2 posições
    
    Considere uma turma de até 10 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais (**use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0**)
*/

#include <iostream>
using namespace std;

#define N 2

struct Alunos {
    int RA;
    int cod_dic;
    double nota_one;
    double nota_two;
    double media;
};

double calcular_media (double nota1, double nota2) {
    double media_pond = ((nota1 * 1) + (nota2 * 2)) / 3;

    return media_pond;
}

void mostrar_notas (Alunos alunos[]) {
    for (int i = 0; i < N; i++) {
        cout << "RA do " << i + 1 << "° aluno: "  << alunos[i].RA << endl;
        cout << "Código da Disciplina: " << alunos[i].cod_dic << endl;
        cout << "Nota 1: " << alunos[i].nota_one << endl;
        cout << "Nota 2: " << alunos[i].nota_two << endl;
        cout << "Média do " << i + 1 << "° aluno: " << alunos[i].media << endl << endl;
    }
}

int main() {
    Alunos alunos[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite o RA do " << i + 1 << "° aluno: ";
        cin >> alunos[i].RA;
        cout << "Digite o código da disciplina: ";
        cin >> alunos[i].cod_dic;
        cout << "Digite a nota 1: ";
        cin >> alunos[i].nota_one;
        cout << "Digite a nota 2: ";
        cin >> alunos[i].nota_two;
        alunos[i].media = calcular_media(alunos[i].nota_one, alunos[i].nota_two);
    }

    mostrar_notas(alunos);

    return 0;
}