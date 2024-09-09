// Exercício 2 - Faça o teste de mesa para os seguintes programas. Mostre o que será impresso no printf em negrito. Os possíveis valores de entrada são 9, 2, 4, 8, 6, 5, 7, 1.


#include <iostream>
#include <limits> // Para std::numeric_limits
#define MAX 6

int seila(int v[]) {
    int min = v[0];
    for(int i = 1; i < MAX; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int main() {
    int valor;
    int num[MAX];
    
    for(int i = 0; i < MAX; i++) {
        std::cout << "Digite o numero " << i << ": ";
        std::cin >> num[i];
    }
    
    valor = seila(num);
    std::cout << "\n\nvalor: " << valor << ".\n\n";
    
    std::cin.get(); // Isso mantém a janela aberta até que o usuário pressione Enter
    return 0;
}
