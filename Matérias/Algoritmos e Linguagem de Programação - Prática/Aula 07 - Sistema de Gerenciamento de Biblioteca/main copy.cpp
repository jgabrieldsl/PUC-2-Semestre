#include <iostream>
using namespace std;


struct vetor{
    int vetorzao[100];
    int sz;
};

int OrdenarVetor(vetor A[], int sz) {
    int maior;
    int menor;
    int X[]; // Declarar o tamanho do vetor, ficaria int X[sz]

    X[sz] = A[]; // Não é possível vetores dessa maneira, é necessário iterar sobre cada posição dos vetores.

    // Maior e menor são iguais ao primeiro elemento que teoricamente está no vetor X
    int maior = X[0];
    int menor = X[0];
    
    for (int i = 0; i < sz; i++){

        if (X[i] > maior) {
            maior == X[maior + 1];
            if (maior == X[i]){
                X[] -= maior;
            }
        }
    }
    
    for (int i = 0; i < sz; i++){
        if(X[i] < menor){
            menor == X[menor - 1];
            if (menor == X[i]){
                X[] -= menor;
            }
        }
    }

    return X;
}

void PrintVetor (int X[], int sz){
    for (int i = 0; i < sz; i++){
        cout << "Array: ";
        cout << " ";
    }
}


int main() {
    int N;
    cout << "Digite o tamanho: ";cin >> N;
    vetor A[N];
    
    for (int i = 0; i < N; i++){
        cout << "Fill the Array: ";
        cin >> A[i];
    }
    
    int resultado = OrdenarVetor(X, N);

    PrintVetor(A,N);
    
    return 0;
}