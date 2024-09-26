#include <iostream>
#include <string>
using namespace std;

#define N 100

struct func {
    int id;
    string nome;
    float salario;
    int idade;
};

func vet_func[N];

int pos = 0;

void cadastraFunc () {
    cin.ignore();
    cout << "Nome: ";
    getline(cin, vet_func[pos].nome);
    cout << "Id: ";
    cin >> vet_func[pos].id;
    cout << "Salário: ";
    cin >> vet_func[pos].salario;
    cout << "Idade: ";
    cin >> vet_func[pos].idade;
    pos++;
};

void exibirFunc () {
    for (int i = 0; i < pos; i++) {
        cout << "Nome: " << vet_func[i].nome << endl;
        cout << "Identificação: " << vet_func[i].id << endl;
        cout << "Salário: " << vet_func[i].salario << endl;
        cout << "Idade: " << vet_func[i].idade << endl;
    }
}

int main () {
    while (true) {
        int opt;
        cout << "Digite: ";
        cin >> opt;

        if (opt == 1) {
            cadastraFunc();
            continue;
        } else if (opt == 2) {
            exibirFunc();
            continue;
        } else if (opt == 0) {
            break;
        }

    }

    return 0;
}