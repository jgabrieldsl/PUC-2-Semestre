/* Exercício 5 - Leia uma lista de inteiros com N posições e imprima o maior e o menor valor, bem como suas respectivas posições. */

#include <iostream>
using namespace std;

struct node {
    int value;
    node* nextNode;
};

void insert (node** head, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o valor: ";
        cin >> value;
        // Criando um novo NÓ e inserindo-o no começo da lista
        node* newNode = new node();
        newNode -> value = value;
        newNode -> nextNode = *head;
        *head = newNode;
    }
}

void maiorMenorPosition (node* head, int *maior, int *menor, int *posMaior, int *posMenor) {
    int posAtual = 0;
    while (head != NULL) {
         if (head -> value > *maior) {
            *maior = head -> value ;
            *posMaior = posAtual++;
        }

        if (head -> value < *menor) {
            *menor = head -> value ;
            *posMenor = posAtual++;
        }
        
        head = head -> nextNode;
    }
}

void printList (node* head) {
    cout << "Valores da lista: ";
    while (head != NULL) {
        cout << head -> value << " ";
        head = head -> nextNode;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    int maior = -999999, menor = 999999, posMaior = 0, posMenor = 0;
    
    insert(&head, 5);
    maiorMenorPosition (head, &maior, &menor, &posMaior, &posMenor);

    // Printando
    printList(head);

    // Maior e menor
    cout << "Maior valor da lista e sua posição: " << maior << " e " << posMaior << endl;
    cout << "Menor valor da lista e sua posição: " << menor << " e " << posMenor << endl;

    return 0;
}