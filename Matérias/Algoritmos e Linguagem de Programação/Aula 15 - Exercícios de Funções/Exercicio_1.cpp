// Exercício 1 - Faça o teste de mesa para os seguintes programas. Mostre o que será impresso no printf em negrito. Os possíveis valores de entrada são 3051, 1293.


#include <iostream>
using namespace std;

void TESTE(int n, int *d) {
    int resto;
    *d = 0;
    while (n != 0) {
        resto = n % 10;
        n = n / 10;
        *d = *d + resto;
    }
}

int main() {
    int a, d;
    cout << "Digite um valor inteiro: ";
    cin >> a;
    TESTE(a, &d); 
    
    cout << "\n\n\t\t RESULTADO = " << d << "\n\n";
    
    return 0;
}

// SOLUÇÃO
// 3051 → “RESULTADO = 9”
// 1293 → “RESULTADO = 15”