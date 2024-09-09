// Exercício 1 - (Desafio) Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.

#include <iostream>
using namespace std;

int main() {
    int numero_digitado, num, cont_media_geral = 0, pares = 0, impares = 0, total_geral = 0, total_pares = 0, media_pares = 0, media_geral = 0;
    
    cout << "Quantos números?: ";
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> numero_digitado;
        
        if (numero_digitado == 0) {
            cout << "Programa encerrado.";
            break;
        }
        
        else if (numero_digitado % 2 == 0) {
            pares += 1;
            total_pares += numero_digitado;
            media_pares = total_pares / pares;
        }
        
        else if (numero_digitado % 2 != 0) {
            impares += 1;
        }
        
        cont_media_geral += 1;
        total_geral += numero_digitado;
        media_geral = total_geral / cont_media_geral;
        
    }
    
    cout << "Pares: " << pares << endl;
    cout << "Ímpares: " << impares << endl;
    cout << "Média dos pares: " << media_pares << endl;
    cout << "Média geral: " << media_geral << endl;
    
    return 0;
}