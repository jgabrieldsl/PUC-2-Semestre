/* Exercício 3 - Faça um programa que leia uma lista X com N números reais e calcule o somatório dos elementos. Imprima a lista e o somatório. */

#include <iostream>
using namespace std;

struct node {
    int value;
    node* nextNode; // Irá apontar para o próximo nó, na lista X.
};

void insert (node** head, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o valor: ";
        cin >> value;

        node* newNode = new node();     // Criando um novo NÓ.
        newNode -> value = value;      // Atribuindo ao nó o value digitado
        newNode -> nextNode = *head;  // Apontando o novo NÓ para o head atual
        *head = newNode;             // Defininindo o novo nó como head, colocando-o no começo da lista
        
    }
}

void printList (node* head) {
    cout << "Valores da lista: ";
    while (head != NULL) {
        cout << head -> value << " ";
        head = head -> nextNode;
    }
}

int sum(node* head) {
    int sum = 0;
    while (head != NULL) {
        sum += head -> value;
        head = head -> nextNode;
    }
    return sum;
}

int main() {
    int qtd;
    cout << "Digite quantos elementos deseja adicionar a lista: ";
    cin >> qtd;

    node* head = NULL;

    insert(&head, qtd);
    printList (head);

    cout << endl << "A soma dos elementos: " << sum(head) << endl;

    return 0;
}