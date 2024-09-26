/* Exercício 4 - Faça o teste de mesa abaixo, imprimindo o que está em negrito no printf.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void seila(int *a, int b) {
    int t = 5;
    *a = t + *a;
}

int sd(int a, int b) {
    int r;
    int t = 2 * a + 1;
    a = 2 * a;
    b = 2 * b;
    r = a + b - t;
    return r;
}

int mist(int a, int *b) {
    int t = *b;
    *b = 2 * a;
    a = t + *b;
    return a;
}

int main() {
    int x = 4, y = 3, z = 2, t = 1;
    z = mist(y, &x);
    t = z;
    seila(&z, y);
    x = x + sd(y, x);
    printf("\\n\\n\\tx = %d, y = %d, z = %d, t = %d\\n\\n", x, y, z, t);
    return 0;
}  */