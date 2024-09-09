// Exercício 4 - Faça o teste de mesa abaixo, imprimindo o que está em negrito no printf.

#include <iostream>
using namespace std;

int sd(int a, int b);
int mist(int a, int *b);
void seila(int *a, int b);

int t; // Variável global para ser usada nas funções sd e mist

void seila(int *a, int b) {
    int temp = 0;
    *a = temp + *a;
    b = 2 * b - temp;
}

int main() {
    int x = 4, y = 3, z = 2, t = 5;
    z = mist(y, &x);
    t = z;
    seila(&z, y);
    x = x + sd(y, x);
    cout << "\n\n\tx = " << x << ", y = " << y << ", z = " << z << ", t = " << t << "\n\n";
    return 0;
}

int sd(int a, int b) {
    int r;
    t = 2 * a + 1;
    a = 2 * a;
    b = 2 * b;
    r = a + b - t;
    return r;
}

int mist(int a, int *b) {
    t = *b;
    *b = 2 * a;
    return a;
}
