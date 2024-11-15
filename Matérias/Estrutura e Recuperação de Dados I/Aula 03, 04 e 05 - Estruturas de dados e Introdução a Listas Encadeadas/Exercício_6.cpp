/* Exercício 6 - Crie um programa que leia uma lista de 15 inteiros e conte quantos são pares e quantos são múltiplos de 5. */

#include <iostream>
using namespace std;

struct node {
    int value;
    node* nextNode;
};

void insert (node** head, int* pares, int* mult5, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o valor: ";
        cin >> value;
        // Criando um novo NÓ e inserindo-o no começo da lista
        node* newNode = new node();
        newNode -> value = value;
        newNode -> nextNode = *head;
        *head = newNode;

        if (value % 2 == 0) {
            (*pares)++;
        }

        if (value % 5 == 0) {
            (*mult5)++;
        }
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
    int pares = 0;
    int mult5 = 0;
    node* head = NULL;
    insert(&head, &pares, &mult5, 15);

    // Printando
    printList(head);
    cout << "Pares: " << pares << endl; 
    cout << "Múltiplos de 5: " << mult5 << endl;

    return 0;
}