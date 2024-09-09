// Exercício 6 - Qual a saída do seguinte código. Considere como valor de entrada o número 5013.

#include <stdio.h>
int main()
{
    int original, num, valor, res = 0;
    scanf("%d", &original); // 5013
    num = original; // num = 5013
    while (num > 0) {
        valor = num % 10; // valor = 3 -> 1 -> 0 -> 5
        res += valor; // res = 3 -> 4 -> 4 -> 9
        num /= 10; // num = 501 -> 50 -> 5 -> 0
    }
    printf("\n\n\tNúmero = %d Resultado = %d", original, res);
    return 0;
}

/*
Número: 5013 = Resultado: 9
*/