/* Exercício 1 - Faça um programa que leia duas listas X e Y com N números reais. Multiplique os respectivos pares de elementos das listas e armazene o resultado em uma terceira lista Z. Imprima as listas X, Y e Z. */

#include <iostream>
using namespace std;

struct nodeX {
    int value;
    nodeX* nextNode; // Irá apontar para o próximo nó, na lista X.
};

struct nodeY {
    int value;
    nodeY* nextNode; // Irá apontar para o próximo nó, na lista Y.
};

struct nodeZ {
    int value;
    nodeZ* nextNode; // Irá apontar para o próximo nó, na lista Z.
};

void insertX (nodeX** head, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o valor a ser adicionado na lista X: ";
        cin >> value;
        nodeX* newNode = new nodeX();  // Cria um novo NÓ
        newNode->value = value;       // Atribui o valor ao novo NÓ
        newNode->nextNode = *head;   // Aponta o novo NÓ para o NÓ atual do head
        *head = newNode;            // Define o novo NÓ como o head da Lista
    }
}

void insertY (nodeY** head, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o valor a ser adicionado na lista Y: ";
        cin >> value;
        nodeY* newNode = new nodeY();  // Cria um novo NÓ
        newNode->value = value;       // Atribui o valor ao novo NÓ
        newNode->nextNode = *head;   // Aponta o novo NÓ para o NÓ atual do head
        *head = newNode;            // Define o novo NÓ como o head da Lista
    }
}

// Função que irá multiplicar os pares de elementos das listas
void multiply (nodeX* nodex, nodeY* nodey, nodeZ** nodez) {
    while (nodex != NULL && nodey != NULL) {
        nodeZ* newNode = new nodeZ();                         // Cria um novo NÓ
        newNode -> value = nodex -> value * nodey -> value;  // Atribui o valor ao novo NÓ
        newNode -> nextNode = *nodez;                       // Aponta o novo NÓ para o NÓ atual do head
        *nodez = newNode;                                  // Define o novo NÓ como o head da Lista

        // Avançando para o próximo NÓ de cada uma das listas
        nodex = nodex -> nextNode;
        nodey = nodey -> nextNode;    
    }
}

void printList (nodeX* nodex, nodeY* nodey, nodeZ* nodez) {
    cout << "Valores de X: ";
    while (nodex != NULL) {
        cout << nodex -> value << " ";
        nodex = nodex -> nextNode; // Avançando para o próximo NÓ da lista X
    }

    cout << endl;
    
    cout << "Valores de Y: ";
    while (nodey != NULL) {
        cout << nodey -> value << " ";
        nodey = nodey -> nextNode; // Avançando para o próximo NÓ da lista Y
    }

    cout << endl;
    cout << "Valores de Z: ";
    while (nodez != NULL) {
        cout << nodez -> value << " ";
        nodez = nodez -> nextNode; // Avançando para o próximo NÓ da lista Z
    }
}

int main() {
    int qtd;
    cout << "Digite quantos elementos deseja adicionar em cada lista: ";
    cin >> qtd;

    nodeX* headX = NULL;
    nodeY* headY = NULL;
    nodeZ* headZ = NULL;

    insertX (&headX, qtd);
    insertY (&headY, qtd);

    multiply (headX, headY, &headZ);

    printList (headX, headY, headZ);

    return 0;
}