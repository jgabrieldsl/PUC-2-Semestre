// Exercício 4 - Faça uma função no programa anterior que imprime os divisores do número inteiro natural lido

#include <iostream>
using namespace std;

int fatorial(int a) {
	for (int i = a - 1; i > 0; i--) {
		a *= i;
	}
    return a;
} 

void edivisor(int a) {
    cout << "Os divisores de " << a << ", são: ";
    for (int i = a; i > 0; i--) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
}

int main () {
    int num;
	cout << "Digite um número: ";
	cin >> num;
	cout << "O fatorial de " << num << " é " << fatorial(num) << endl;
	
	
	int rec = fatorial(num);
	
	edivisor(rec);
	
	return 0;
}
