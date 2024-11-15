/* Exercício 2 - Crie um programa que leia uma lista X com N inteiros e multiplique cada elemento da lista por um valor inteiro K. Imprima a lista original, o valor de K e a lista multiplicada. */

#include <iostream>
using namespace std;

struct nodeX {
    int value;
    nodeX* nextNode; 
};

struct nodeY {
    int value;
    nodeY* nextNode; 
};

void insert(nodeX** head, int qtd) {
    for (int i = 0; i < qtd; i++ ) {
        int value;
        cout << "Digite o valor a ser adicionado na lista X: ";
        cin >> value;
        nodeX* newNode = new nodeX();   // Criando um novo nó
        newNode -> value = value;      // Atribuindo o valor digitado ao novo nó 
        newNode -> nextNode = *head;  // Colocando o novo nó no começo da lista, apontando-o para o head atual.
        *head = newNode;             // Definindo o novo nó como o head da lista.
    }
}

void multiplyK (nodeX* headX, nodeY** headY, int k) {
    while (headX != NULL) {
        nodeY* newNode = new nodeY();
        newNode -> value = headX -> value * k;
        newNode -> nextNode = *headY;
        *headY = newNode;

        headX = headX -> nextNode;

    }
}

void printList (nodeX* headX, nodeY* headY, int k) {
    cout << "Valores da lista original: ";
    while (headX != NULL) {
        cout << headX -> value << " ";
        headX = headX -> nextNode;
    }

    cout << endl << "Valor da Constante (K): " << k << endl;

    cout << "Valores da lista multiplicada por " << k << ": ";
    while (headY != NULL) {
        cout << headY -> value << " ";
        headY = headY -> nextNode;
    }
}
 
int main () {
    int qtd, k;
    cout << "Quantos valores deseja inserir na lista?: "; cin >> qtd;  

    nodeX* headX = NULL;
    nodeY* headY = NULL;

    insert (&headX, qtd);

    cout << "Agora digite a constante (K): "; cin >> k;
    multiplyK (headX, &headY, k);

    printList (headX, headY, k);
    
    return 0;
}