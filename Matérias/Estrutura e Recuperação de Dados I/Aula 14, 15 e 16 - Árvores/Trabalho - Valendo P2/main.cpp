#include <iostream> 
#include <string>
#include <cstring>   // Biblioteca para: strcmp e strcpy

using namespace std;

struct Contato {
    char nome[50];          // Nome do contato
    char celular[15];      // Celular do contato
    Contato* esquerda;    // Ponteiro para o nó a esquerda (subárvorea)
    Contato* direita;    // Ponteiro para o nó a direita (subárvore)
};

int compararNomes(const char* nome1, const char* nome2) {
    return strcmp(nome1, nome2);
}

// inserir contato
Contato* inserir(Contato* raiz, Contato* novo) {
    if (raiz == nullptr) { // posição encontrada para inserção
        return novo;
    }

    // Inserir à esquerda se for menor
    if (compararNomes(novo -> nome, raiz -> nome) < 0) {
        raiz -> esquerda = inserir(raiz -> esquerda, novo);
    }

    // Inserir à direita se for maior
    else if (compararNomes(novo -> nome, raiz -> nome) > 0) {
        raiz -> direita = inserir(raiz -> direita, novo);
    }

    // Se forem iguais, return.
    return raiz;
}

// Buscar por nome
Contato* buscar(Contato* raiz, const char* nome) {
    if (raiz == nullptr) { // não encontrado
        return nullptr;
    }

    if (compararNomes(nome, raiz -> nome) == 0) { // encontrado
        return raiz;
    }

    if (compararNomes(nome, raiz -> nome) < 0) { // Buscar na esquerda, sub
        return buscar(raiz -> esquerda, nome);
    }

    // Buscar na direita, sub
    return buscar(raiz -> direita, nome);
}

Contato* encontrarMinimo(Contato* raiz) {
    while (raiz -> esquerda != nullptr) { // O menor elemento está na extremidade esquerda
        raiz = raiz -> esquerda;
    }
    return raiz;
}

// Remover por nome
Contato* remover(Contato* raiz, const char* nome) {
    if (raiz == nullptr) { // Contato não encontrado
        return nullptr;
    }

    if (compararNomes(nome, raiz -> nome) < 0) { // Procurar na esquerda
        raiz -> esquerda = remover(raiz -> esquerda, nome);
    } else if (compararNomes(nome, raiz -> nome) > 0) { // Procurar na direita
        raiz -> direita = remover(raiz -> direita, nome);
    } else {
        
        // para nó folha
        if (raiz -> esquerda == nullptr && raiz -> direita == nullptr) {
            delete raiz;
            return nullptr;
        }

        // para nó filho
        if (raiz -> esquerda == nullptr) {
            Contato* temp = raiz -> direita;
            delete raiz;
            return temp;

        } else if (raiz -> direita == nullptr) {
            Contato* temp = raiz -> esquerda;
            delete raiz;
            return temp;
        }

        // para nó com dois filhos, binario
        Contato* temp = encontrarMinimo(raiz -> direita);
        strcpy(raiz -> nome, temp -> nome);
        strcpy(raiz -> celular, temp -> celular);
        raiz -> direita = remover(raiz -> direita, temp -> nome);
    }

    return raiz;
}

// listar contatos com base no nivel
void listarContatos(Contato* no, int nivel) {
    if (no != nullptr) {
        for (int i = 0; i < nivel; i++) {
            cout << "   ";
        }
        cout << "Nome: " << no -> nome << ", Celular: " << no -> celular << endl;
        listarContatos(no -> esquerda, nivel + 1); //  esquerda
        listarContatos(no -> direita, nivel + 1);  // direita
    }
}

// listar contatos
void listar(Contato* raiz) {
    cout << "Contatos:" << endl;
    listarContatos(raiz, 0);
}

void freeMemoryNode(Contato* no) {
    if (no != nullptr) {
        freeMemoryNode(no -> esquerda);
        freeMemoryNode(no -> direita);
        delete no;
    }
}

void freeMemory(Contato* raiz) {
    freeMemoryNode(raiz);
}


int main() {
    Contato* raiz = nullptr; // Inicializando a árvore
    int choice;

    do {
        cout << "Welcome to the Contact Manager with Árvore Binária in C or C++" << endl << endl;
        cout << "1. Adicionar contato" << endl;
        cout << "2. Buscar contato" << endl;
        cout << "3. Remover contato" << endl;
        cout << "4. Listar contatos" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Contato* novo = new Contato;
                cout << "Nome: ";
                cin.getline(novo -> nome, 50);
                cout << "Celular: ";
                cin.getline(novo -> celular, 15);
                novo -> esquerda = nullptr;
                novo -> direita = nullptr;
                raiz = inserir(raiz, novo);
                break;
            }
            case 2: {
                char nome[50];
                cout << "Nome para buscar: ";
                cin.getline(nome, 50);
                Contato* encontrado = buscar(raiz, nome);
                if (encontrado) {
                    cout << "Contato encontrado: " << encontrado -> nome << ", Celular: " << encontrado -> celular << endl;
                } else {
                    cout << "Contato não encontrado." << endl;
                }
                break;
            }
            case 3: {
                char nome[50];
                cout << "Nome para remover: ";
                cin.getline(nome, 50);
                raiz = remover(raiz, nome);
                break;
            }
            case 4:
                listar(raiz);
                break;
            case 5:
                cout << "Saindo..." << endl;
                freeMemory(raiz); // Não tinha no descritivo, mas decidi adicionar.
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (choice != 5);

    return 0;
}
