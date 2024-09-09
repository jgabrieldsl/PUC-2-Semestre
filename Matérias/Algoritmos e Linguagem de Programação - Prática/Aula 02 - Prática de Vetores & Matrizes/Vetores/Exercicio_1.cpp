// Exercício 1 - 1. Fazer um programa que faz a leitura de um vetor X com N reais , com tamanho máximo igual a 20 e N deverá ser lido. Calcula o somatório de todos os elementos do vetor. Imprimir o vetor lido e o valor do somatório. O somatório é dado por: S = S + X [i] ; para i = 0, 1, 2, ... , N-1

#include <iostream>
using namespace std;

int main() {

  float numeroadicionado, soma;
	int num;
	while (true) {
        cout << "Digite a quantidade de números que deseja adicionar ao vetor: "; 
        cin >> num;
        
        if (num > 20) {
            cout << "Digite um valor menor ou igual a 20!" << endl;
        }
        else break;
	}
	
	float X[num] = {};
    
    
    for (int i = 0 ; i < num ; i++) {
		cout << "Digite o " << i+1 << "° número: ";
		cin >> numeroadicionado;
		X[i] = numeroadicionado;
	}
		
    for (int i = 0 ; i < num ; i++) {
        cout << X[i];
        if (i < num-1) cout << ", ";
        soma += X[i];
    }
    
    cout << "\nA soma desses números é: " << soma << endl;
    return 0;
}
