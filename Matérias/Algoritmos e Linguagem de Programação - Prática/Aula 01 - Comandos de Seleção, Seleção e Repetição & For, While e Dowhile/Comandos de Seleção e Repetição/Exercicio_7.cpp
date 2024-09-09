/*

Exercício 7 - 7. Um sistema de equações lineares da forma:
    - ax + by = c
    - dx + ey = f
    
    Pode ser resolvido utilizando-se as seguintes fórmulas:
    
    (https://prod-files-secure.s3.us-west-2.amazonaws.com/12354879-3dfd-4c4e-9d08-013b483895a3/976ff96b-efef-4511-8a6b-62342fc24e0c/image.png)
    
    - Repetir várias vezes a leitura do conjunto de coeficientes (a, b, c, d, e, f) e imprimir a solução x e y.
    - Antes de efetuar a divisão, verificar se ela pode ser feita.
    - Em caso negativo, imprimir uma mensagem de que o sistema não tem solução.
    - A repetição de leitura deve ser interrompida com a leitura de (a, b, c, d) iguais a zero.


*/

#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, d, e, f, x, y;
    
    while (true) {
        cout << "Digite o valor para A: ";
        cin >> a;
        cout << "Digite o valor para B: ";
        cin >> b;
        cout << "Digite o valor para C: ";
        cin >> c;
        cout << "Digite o valor para D: ";
        cin >> d;
        cout << "Digite o valor para E: ";
        cin >> e;
        cout << "Digite o valor para F: ";
        cin >> f;
        
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }
        
        int divisor = a * e - b * d;
        if (divisor == 0) {
            cout << "O sistema não tem solução" << endl;
            continue;
        }
        
        x = (c * e - b * f) / divisor;
        y = (a * f - c * d) / divisor;
        
        cout << "X = " << x << ", Y = " << y << endl;
        break;   
    }
    
    return 0;
}
