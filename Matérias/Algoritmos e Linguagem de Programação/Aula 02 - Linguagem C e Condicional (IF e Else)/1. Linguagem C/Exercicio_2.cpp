// 2. Suponha que o valor de uma certa variável inteira A = 5 e de uma variável B = 13. Como poderíamos trocar o valor dessas variáveis, ou seja, A = 13 e B = 5?

// RESOLUÇÃO

#include <iostream>
using namespace std;

int main () {
    int A, B, C;
    
    A = 5;
    B = 13;
    
    // Salvando em outra variável
    C = A;
    
    A = B;
    B = C;
    
    cout << "O valor de A: " << A << endl;
    cout << "O valor de B: " << B << endl;

    return 0;
}