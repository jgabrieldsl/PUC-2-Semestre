/* 
    Exercício 2 - Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos:
        - RA - inteiro
        - Código da Disciplina - inteiro de 4 dígitos
        - Nota1 e Nota 2 – valores reais que podem ser armazenados na forma de um vetor de 2 posições
    
    Considere uma turma de até 10 alunos. Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais (**use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0**)
*/

#include <iostream>
using namespace std;

#define N 10

struct Alunos {
    int RA;
    int cod_dic;
    double nota1[];
    double nota2[];
}
int main() {

    return 0;
}