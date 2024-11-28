/*

Desafio: Verificação de Parênteses Balanceados

Objetivo: Usar uma pilha para verificar se os delimitadores de uma expressão matemática (parênteses '()', colchetes '[]' e chaves '{}') estão balanceados.

Descrição

Escreva um programa que:
    - Leia uma expressão matemática contendo parênteses, colchetes e chaves.
    - Utilize uma pilha para verificar se esses delimitadores estão corretamente balanceados.
    - Exiba:
    - "Expressão válida": Se os delimitadores estiverem balanceados.
    - "Expressão inválida": Caso contrário.


Exemplo:

Entrada:
{[(2+3)*5] + (4/2)}

Saída:
Expressão válida

Regras para Balanceamento

1. Cada delimitador de abertura deve ter um delimitador de fechamento correspondente.
2. Os delimitadores devem ser fechados na ordem inversa em que foram abertos.
Exemplo:
    - A expressão {[(2+3)*5] + (4/2)} está balanceada porque:
        - '{' é fechado por '}'.
        - '[' é fechado por ']'.
        - '(' é fechado por ')'.

Etapas da Solução Usando Pilhas

1. Percorrer a expressão caractere por caractere:
    - Se for um delimitador de abertura ('(', '[', '{'):
        - Adicione-o à pilha.

    - Se for um delimitador de fechamento (')', ']', '}'):
        - Verifique a pilha:
            - Se estiver vazia, a expressão é inválida (não há abertura correspondente).
            - Se não estiver vazia, retire o topo da pilha e verifique:
                - Se o topo corresponde ao delimitador de abertura correspondente.
                - Caso não corresponda, a expressão é inválida.

2. Após percorrer toda a expressão:
    - Se a pilha ainda contiver elementos, a expressão é inválida (existem aberturas não fechadas).

Explicação com Exemplo

Expressão: {[(2+3)*5] + (4/2)}

- Passo 1: '{' → Adiciona '{' à pilha.
- Passo 2: '[' → Adiciona '[' à pilha.
- Passo 3: '(' → Adiciona '(' à pilha.
- Passo 4: ')' → Verifica a pilha e corresponde ao '(' do topo.
- Passo 5: ']' → Verifica a pilha e corresponde ao '[' do topo.
- Passo 6: '}' → Verifica a pilha e corresponde ao '{' do topo.
- Pilha está vazia ao final, logo a expressão é válida.

*/


int main() {
    return 0;
}
