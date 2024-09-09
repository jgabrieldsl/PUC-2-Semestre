// Exercício 7 - Refaça ambos com o while e depois com o do/while

// Código 1
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
    acum = acum * i;
}
printf("%d, ", acum);

// Código 1 - com while
#include <iostream>
using namespace std;
int main()
{
    int cont = 0, acum = 1, num;
    cin >> num;

    while (cont < num)
    {
        cont++;
        acum *= cont;
    }

    cout << acum;
}

// Código 1 - com do/while
#include <iostream>
using namespace std;

int main()
{
    int cont = 0, acum = 1, num;
    cin >> num;
    do
    {
        cont++;
        acum = acum * cont;
    } while (cont < num);

    cout << acum;
}

// Código 2
scanf("%d", &val);
k = 0;
D = 0;
while (k < val)
{
    scanf("%d", &n1);
    if ((n1 % 3) == 0)
    {
        ND++;
        if (n1 % 2 == 0)
        {
            D++;
        }
    }
    k = k + 3;
}

// Código 2 = com for
#include <iostream>
using namespace std;

int main () {
	int valor, i, cont3, cont2;
	
	cout << "Digite quantos números verificar: "
	cin >> valor;
	
	for (i = 0; i < valor; i += 3) {
		cout << "Digite um número: "
		cin >> n1;
		if (n1 % 3 == 0) {
			cont3++;
			if (n1 % 2 == 0) {
				cont2++;
			}
		}
	}
	
	cout << "Número divisiveis por 3: " << cont3 << "Dentre eles, também são divísveis por 2: "
	
}