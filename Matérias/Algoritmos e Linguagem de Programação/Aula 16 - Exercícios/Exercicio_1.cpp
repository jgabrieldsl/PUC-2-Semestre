/* Exercício 1 - Faça o teste de mesa para os seguintes programas. Mostre o que será impresso no printf em negrito. Os possíveis valores de entrada são 3051, 1293.

#include <stdio.h>
#include <stdlib.h>

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
    int a, resultado;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    TESTE(a, &resultado);
    printf("\\n\\n\\t\\t RESULTADO = %d\\n\\n", resultado);
    return 0;
} */