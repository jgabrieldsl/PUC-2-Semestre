using namespace std;
#include <iostream>

struct vetor{
    int vetorzao[100];
    int sz;
};

int OrdenarVetor(vetor A[], int sz) {
    int maior; int menor;
    int X[]; // Declarar o tamanho do vetor sempre, ficaria int X[sz]

    X[sz] = A[]; // Não é possível fazer a atribuição de vetores dessa maneira, é necessário iterar sobre cada posição dos vetores.

    // Maior e menor são iguais ao primeiro elemento que teoricamente está no vetor X
    int maior = X[0]; int menor = X[0]
    
    // Descobrindo o maior elemento
    for (int i = 0; i < sz; i++){
        if (X[i] > maior) { // Se o elemento for maior que o maior

            maior == X[maior + 1]; // O correto seria maior = X[i];

            // Não entendi
            if (maior == X[i]){
                X[] -= maior;
            }

        }
    }
    
    // Decobrindo o menor elemento
    for (int i = 0; i < sz; i++){
        // Se o elemento for menor que o menor
        if(X[i] < menor){

            menor == X[menor - 1]; // O correto seria menor = X[i];

            // Não entend
            if (menor == X[i]){
                X[] -= menor;
            }
        }
    }

    return X; // Tentando retornar o tipo VETOR, mas a função é do tipo INT
}

void PrintVetor(X[], int sz){
    for (int i = 0; i < sz; i++){
        cout << "Array: "; 
        cout << X[i];
        cout << " ";
    }
}


int main()
{
    const int N;
    cout << "Digite o tamanho: "; cin >> N;
    vetor A[N];
    
    for (int i = 0; i < N; i++){
        cout << "Fill the Array: "; cin >> A[i];
    }
    
    int resultado = OrdenarVetor(X,N);

    PrintVetor(A,N);
    
    return 0;
}