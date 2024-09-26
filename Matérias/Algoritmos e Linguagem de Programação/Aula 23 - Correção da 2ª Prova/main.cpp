// Código feito pelo professor

#include <iostream>
using namespace std;

struct func {
  int id;
  char nome[50];
  float salario;
  int idade;
};

void PrintFunc(struct func F) {
  cout << "Nome: " << F.nome << endl;
  cout << "id: " << F.id << endl;
  cout << "salario: " << F.salario << endl;
  cout << "idade: " << F.idade << endl;
  cout << "////////////////////////////";
}

void Cadastrar(struct func F[], int * pos) {

  cout << "Nome: ";
  cin.getline(F[ * pos].nome, 50);

  cout << "id: ";
  cin >> F[ * pos].id;

  cout << "salario: ";
  cin >> F[ * pos].salario;

  cout << "idade: ";
  cin >> F[ * pos].idade;

  ( * pos) ++;

}

void PrintFuncVet(struct func F[], int sz) {
  for (int i = 0; i < sz; i++) PrintFunc(F[i]); // utiliza a primeira função criada para imprimir
}

void AumentaSalario(struct func F[], int id, int sz, float percentual) {
  for (int i = 0; i < sz; i++) {
    if (F[i].id == id) {
      F[i].salario *= (1 + percentual / 100);
      return; //apenas para sair, pode usar um "brake"
    }
  }
}

void ExibirAcima(struct func F[], int sz, float val) {

  for (int i = 0; i < sz; i++) {

    if (F[i].salario > val) PrintFunc(F[i]);

  }
}

void MediaSal(struct func F[], int sz) {

  float soma = 0;

  for (int i = 0; i < sz; i++) soma += F[i].salario;

  float media = soma / float(sz); //transforma "sz" que foi declarado int para float

  cout << "A media salarial eh " << media << endl;
}

int main() {
  struct func funcvec[100];

  int qnt = 0, opt = 0;

  while (opt != 6) {

    cout << "Digite a opção desejada: ";
    cin >> opt;

    switch (opt) {

    case 1: {
      Cadastrar(funcvec, &qnt);
      break;
    }
    case 2: {
      PrintFuncVet(funcvec, qnt);
      break;
    }

    case 3: {
      int id;
      float perc;
      cout << "Digite o id e o percentual de aumento: ";
      cin >> id >> perc;
      AumentaSalario(funcvec, qnt, id, perc);
      break;
    }
    case 4: {
      float valor;
      cin >> valor;
      ExibirAcima(funcvec, qnt, valor);
      break;
    }
    case 5: {
      MediaSal(funcvec, qnt);
      break;
    }
    }
  }
  return 0;
}