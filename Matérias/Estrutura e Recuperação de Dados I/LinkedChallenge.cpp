#include <iostream>
#include <string>
using namespace std;

struct cliente {
    string nome;
    int CPF;
    int celular;
    cliente* nextCliente;
};

/* Sign Up*/
void cadastrarCliente (cliente** head) {
    string clienteName;
    cin.ignore();
    cout << "Digite o nome do cliente: ";
    getline(cin, clienteName);

    int CPF;
    cout << "Digite o CPF do cliente: ";
    cin >> CPF;

    int celular;
    cout << "Digite o celular do cliente:";
    cin >> celular;

    /**/
    cliente* newCliente = new cliente();
    newCliente -> nome = clienteName;
    newCliente -> CPF = CPF;
    newCliente -> celular = celular;
    newCliente -> nextCliente = *head;
    *head = newCliente;
}

/* Delete */
void excluirCliente (cliente** head, int value) {

    if (*head == nullptr) {
        cout << "A lista está vazia! ";
        return;
    }

    cliente* prev = nullptr;
    cliente* current = *head;

    while (current != nullptr) {
        if (current -> CPF == value) {
            /* Está no começo da lista: O head só precisa ser atualizado nesse caso*/
            if (prev == nullptr) {
                cliente* temp = *head;
                *head = current -> nextCliente;
            } else { // Está no meio ou final da lista
                prev -> nextCliente = current -> nextCliente;
            }
            /* Liberando memória do número deletado*/
            cliente* temp = current;
            current = current -> nextCliente;
            delete temp;
        } else {
            prev = current; 
            current = current -> nextCliente;
        }
    }

    cout << "Excluido com sucesso!";
}

/**/
void exibirClientes(cliente* head) {
    while (head != nullptr) {
        cout << "Lista de Clientes: " << endl;
        cout << "Nome: " << head -> nome;
        cout << "CPF: " << head -> CPF;
        cout << "Celular: " << head -> celular << endl << endl;
        head = head -> nextCliente;
    }
    cout << "-----------------";
}

void consultarCPF (cliente* head, int value) {
    while (head != nullptr) {
        if (head->CPF == value) {
            cout << "Encontrado!" << endl << endl;
            cout << "Lista de Clientes: " << endl;
            cout << "Nome: " << head -> nome;
            cout << "CPF: " << head -> CPF;
            cout << "Celular: " << head -> celular << endl << endl;
        }
        head = head -> nextCliente;
    }
}

int main() {
    cliente* head = nullptr;
    int choice;
    do {
        cout << "Escolha sua opção: " << endl;
        cout << "1. Cadastrar" << endl;
        cout << "2. Excluir" << endl;
        cout << "3. Exibir" << endl;
        cout << "4. Consulta por CPF" << endl;
        cout << "5. Sair" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            cadastrarCliente(&head);
            break;
        case 2:
            excluirCliente (&head, 123);
            break;
        case 3:
            exibirClientes(head);
            break;
        case 4:
            consultarCPF(head, 123);
            break;
        case 5:
            break;
        default:
            break;
        }
    } while (choice != 5);
    
    return 0;
}