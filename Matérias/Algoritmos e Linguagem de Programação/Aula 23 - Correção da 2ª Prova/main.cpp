#include <iostream>
using namespace std;

struct Func {
    int id;
    char nome[50];
    float salario;
    int idade;
};

void PrintFunc(struct Func& F) {
    cout << "Nome: " << F.nome << endl;
    cout << "ID: " << F.id << endl;
    cout << "Salário: " << F.salario << endl;
    cout << "Idade: " << F.idade << endl;
    cout << "////////////////////////////" << endl;
}

void PrintFuncVet(struct Func F[], int sz) {
    for (int i = 0; i < sz; i++) {
        PrintFunc(F[i]);
    }
}

void ExibirAcima(Func F[], int sz, float val) {
    for (int i = 0; i < sz; i++) {
        if (F[i].salario > val) {
            PrintFunc(F[i]);
        }
    }
}

void Cadastrar(Func F[], int *pos) {
    cout << "Nome: ";
    cin.ignore();
    cin.getline(F[*pos].nome, 50);

    cout << "ID: ";
    cin >> F[*pos].id;

    cout << "Salário: ";
    cin >> F[*pos].salario;

    cout << "Idade: ";
    cin >> F[*pos].idade;

    *pos++;
}

void AumentaSalario(Func F[], int sz, int id, float percentual) {
    for (int i = 0; i < sz; i++) {
        if (F[i].id == id) {
            F[i].salario *= (1 + percentual / 100);
            return;
        }
    }
}

void MediaSal(struct Func F[], int sz) {
    if (sz == 0) {
        cout << "Nenhum funcionário cadastrado." << endl;
        return;
    }

    float soma = 0;
    for (int i = 0; i < sz; i++) {
        soma += F[i].salario;
    }

    float media = soma / sz; // Não precisa converter sz para float, a divisão já resulta em float

    cout << "A média salarial é " << media << endl;
}

int main() {
    Func funcvec[100];
    int qnt = 0, opt = 0;

    while (opt != 6) {
        cout << "Digite a opção desejada (1 - Cadastrar, 2 - Listar, 3 - Aumentar Salário, 4 - Exibir Acima, 5 - Média Salarial, 6 - Sair): ";
        cin >> opt;

        switch (opt) {
            case 1:
                Cadastrar(funcvec, &qnt);
                break;
            case 2:
                PrintFuncVet(funcvec, qnt);
                break;
            case 3: {
                int id;
                float perc;
                cout << "Digite o ID e o percentual de aumento: ";
                cin >> id >> perc;
                AumentaSalario(funcvec, qnt, id, perc);
                break;
            }
            case 4: {
                float valor;
                cout << "Digite o valor: ";
                cin >> valor;
                ExibirAcima(funcvec, qnt, valor);
                break;
            }
            case 5:
                MediaSal(funcvec, qnt);
                break;
            case 6:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
    return 0;
}
