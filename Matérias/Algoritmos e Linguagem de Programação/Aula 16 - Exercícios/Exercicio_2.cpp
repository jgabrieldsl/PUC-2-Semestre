/* Exercício 2 - Faça o teste de mesa para os seguintes programas. Mostre o que será impresso no printf em negrito. Os possíveis valores de entrada são 9, 2, 4, 8, 6, 5, 7, 1.

#include <stdio.h>
#include <stdlib.h>

#define max 6

int seila (int v[]) {
    int i;
    int min;
    min = v[0];
    for(i = 1; i < max; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int main() {
    int valor;
    int i, num[max];

    for(i = 0; i < max; i++) {
        printf("\\nDigite o numero %d: ", i);
        scanf("%d", &num[i]);
    }

    valor = seila(num);
    printf("\\n\\n valor: %d.\\n\\n", valor);
    system("pause");
} */