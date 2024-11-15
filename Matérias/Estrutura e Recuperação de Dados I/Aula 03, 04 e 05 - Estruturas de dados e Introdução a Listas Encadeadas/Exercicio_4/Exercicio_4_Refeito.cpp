/* Exercício 4 - Leia uma lista X com N inteiros e gere uma segunda lista contendo os valores de X em ordem inversa. Imprima as duas listas. */

#include <iostream>
using namespace std;

struct node {
    int value;
    node* nextNode;
};

// Função para inserir um Elemento no começo da lista
void insertValues(node** head, int qtd) {
    for (int i = 0; i < qtd; i++) {
        int value;
        cout << "Digite o " << i + 1 << "° valor: ";
        cin >> value;
        // Criando um novo NÓ e inserindo-o no começo da lista
        node* newNode = new node();
        newNode -> value = value;
        newNode -> nextNode = *head;
        *head = newNode;
    }
}

/* Função para Inverter a lista, utilizando variáveis temporárias

    Entendendo a lógica:
    Três variáveis: Anterior, Atual e Próxima
    Preciso que o NÓ aponte para o NÓ anterior a ele, sendo o último apontando para NULL.

    Lógica:
    Lista exemplo: 1 2 3 4 5
    Eu preciso que o head, 1, aponte para NULL. Antes preciso salvar o seu NEXT, 2.

    Feito isso:

    Defino PREV = CURRENT, ou seja, PREV que era NULL passa a ser = 1.
    Também defino CURRENT = NEXT, ou seja, CURRENT que era 1, passa a ser = 2

    CURRENT volta = 2 para a 2° iteração.
    PREV volta = 1 para a 2° iteração

    ...

*/

void invertValues (node** head) {
    node* prev = NULL; // Elemento: Anterior
    node* current = *head; // Elemento: Atual
    node* next = NULL; // Elemento: Próximo

    // NULL <-- 1 <-- 2 <-- 3 <-- 4 <-- 5
    while (current != NULL) {
        next = current -> nextNode; // 1°: Next = 2 | Next = 3 | Next = 4 | Next = 5 | Next = NULL
        current -> nextNode = prev; // 1°: 1 aponta para NULL | 2 Aponta para 1 | 3 aponta para 2 | 4 aponta para 3 | 5 aponta para 4
        prev = current; // 1°: Prev = 1 | Prev = 2 | Prev = 3 | Prev = 4 | Prev = 5
        current = next; // 1°: Current = 2 | Current = 3 | Current = 4 | Current = 5 | Current = NULL (Laço se encerra)
    }

    // Agora temos que atualizar o head que ainda está definido como 1, mas na real é o 5. Em qual variável está salva o 5? Na Prev (Anterior)
    *head = prev;
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
    node* head = NULL; 
    cout << "Insira os valores!!!" << endl;
    insertValues (&head, 3);
    printList (head, "original");

    // Invertendo a lista
    invertValues(&head);
    printList (head, "invertida");

    return 0;
}