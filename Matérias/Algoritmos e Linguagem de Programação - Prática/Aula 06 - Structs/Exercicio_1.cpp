/* 
    Exercício 1 - Elabore um programa que crie uma estrutura com as seguintes informações de um produto:
    - Código do produto – inteiro de 3 dígitos
    - Quantidade em estoque - inteiro
    - Valor de compra - real
    - Valor de Venda - real

    - O programa deverá ler a informação de 10 produtos e determinar
    - O código do produto com maior quantidade de estoque
    - A quantidade de estoque do produto que proporciona o maior lucro
*/

#include <iostream>
using namespace std;

#define N 10

struct Produto {
    int cod_prod;
    int qtd_estoque;
    double valor_compra;
    double valor_venda;    
};

int maiorEstoque (Produto produto[]) {
    int maior_qtd = -1, cod_maior;

    for (int i = 0; i < N; i++) {
        if (produto[i].qtd_estoque > maior_qtd) {
            maior_qtd = produto[i].qtd_estoque;
            cod_maior = produto[i].cod_prod;
        }
    }

    return cod_maior;
}

int qtdMaiorLucro (Produto produto[]) {
    double maiorLucro = -9999, maiorEstoque;
    for (int i = 0; i < N; i++) {
        double lucro = produto[i].valor_venda - produto[i].valor_compra;
        if (lucro > maiorLucro) {
            maiorEstoque = produto[i].qtd_estoque;
        }
    }

    return maiorEstoque;
}

int main() {
    Produto produto[N];

    for (int i = 0; i < N; i++) {
        cout << "\n Cadastro do produto " << i + 1 << endl;
        cout << "Digite o código do produto: ";
        cin >> produto[i].cod_prod;

        cout << "Digite a quantidade em estoque do produto: ";
        cin >> produto[i].qtd_estoque;

        cout << "Digite o valor de compra do produto: ";
        cin >> produto[i].valor_compra;

        cout << "Digite o valor de venda do produto: ";
        cin >> produto[i].valor_venda;
    }

    int maior_estoque = maiorEstoque(produto);
    int maior_lucro = qtdMaiorLucro(produto);

    cout << "Código do produto com maior estoque: " << maior_estoque << endl;
    cout << "Quantidade de estoque do produto com maior lucro: " << maior_lucro << endl;

    return 0;
}