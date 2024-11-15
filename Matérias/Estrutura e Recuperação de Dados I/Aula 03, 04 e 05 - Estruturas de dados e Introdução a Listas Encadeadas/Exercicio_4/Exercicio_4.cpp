/* Exercício 4 - Leia uma lista X com N inteiros e gere uma segunda lista contendo os valores de X em ordem inversa. Imprima as duas listas. */

#include <iostream>
using namespace std;

struct node {
    int value;
    node* nextNode;
};

void insert (node** headX) {
    for (int i = 0; i < 3; i++) {
        int value;
        cout << "Digite o valor: ";
        cin >> value;
        // Criando um novo NÓ e inserindo-o no começo da lista
        node* newNode = new node();
        newNode -> value = value;
        newNode -> nextNode = *headX;
        *headX = newNode;
    }
}

void generateInvertedList (node* headX, node** headY) {
    while (headX != NULL) {
        node* newNode = new node();
        newNode -> value = headX -> value;
        newNode -> nextNode = *headY;
        *headY = newNode;

        headX = headX -> nextNode; // Avançando para o próximo NÓ
    }
}

void printList (node* head, string listName) {
    cout << "Valores da lista " << listName << ": ";
    while (head != NULL) {
        cout << head -> value << " ";
        head = head -> nextNode;
    }
    cout << endl;
}

int main() {

    node* headX = NULL; 
    node* headY = NULL;
    
    insert(&headX);
    generateInvertedList(headX, &headY);
    printList(headX, "original");
    printList(headY, "inversa");

    return 0;
}