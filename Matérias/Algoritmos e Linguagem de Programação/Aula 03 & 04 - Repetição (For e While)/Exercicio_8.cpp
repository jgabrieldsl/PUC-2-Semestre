// Exercício 8 - Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. 

#include <iostream>
using namespace std;

int main () {
	int num, tabuada, i, resultado;
    cout << "Digite um número para mostar sua tabuada: ";
    cin >> num;
    
    cout << "Tabuada de " << num << endl;
    for (i = 1; i <= 10; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
	}

    return 0;
}
