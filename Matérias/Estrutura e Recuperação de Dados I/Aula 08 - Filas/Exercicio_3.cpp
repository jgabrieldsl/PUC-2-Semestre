/* Exercise 3:

Escreva uma função que, dada uma fila, a divida em duas filas separadas:

- Uma contendo todos os números pares.
- Outra contendo todos os números ímpares.

*/

#include <iostream>
using namespace std;

struct number {
    int value;
    number* nextNumber;
};

struct queue {
    number* firstNumber;
    number* lastNumber;
};

/* Inserting Number in Queue*/
void insertNumber(queue* q) {
    system("cls");
    cout << "==== Inserting Value in the Number Queue ====" << endl << endl;
    /* Input value */
    int value;
    cout << "Insert the Number: ";
    cin >> value;

    /* */
    number* newNumber = new number();
    newNumber -> value = value;
    newNumber -> nextNumber = nullptr; // NewNumber sempre aponta para null, pois é o último da fila;

    /* Verificando se a lista está vazia */
    if (q -> lastNumber == nullptr) { // Sim? O primeiro será igual ao novo número que seria adicionado ao final.
        q -> firstNumber = newNumber;
    } else { // Não? Então o atual último vai apontar para newNumber
        q -> lastNumber -> nextNumber = newNumber;
    }

    q -> lastNumber = newNumber;

    cout << "Number added to queue successfully!" << endl << endl;
}

void splitQueue (queue* q, queue* qEven, queue* qOdd) {
    system("cls");
    cout << "==== Split Values in the Number Queue ====" << endl << endl;

    number* currentNumber = q -> firstNumber;

    while (currentNumber != nullptr) {

        if (currentNumber -> value % 2 == 0) {
            /* Criando um novo nó em EvenQueue*/
            number* newEvenNumber = new number();
            newEvenNumber -> value = currentNumber -> value;
            newEvenNumber -> nextNumber = nullptr;
            
            /* Verificando se a lista está vazia*/
            if (qEven -> lastNumber == nullptr) {
                qEven -> firstNumber = newEvenNumber;
            } else {
                qEven -> lastNumber -> nextNumber = newEvenNumber;
            }
            qEven -> lastNumber = newEvenNumber;
            cout << "Number: " << newEvenNumber -> value << " adicionado a lista de número pares! " << endl;

        }
        
        if (currentNumber -> value % 2 != 0) {
            /* Criando um novo nó em oddQueue*/
            number* newOddNumber = new number();
            newOddNumber -> value = currentNumber -> value;
            newOddNumber -> nextNumber = nullptr;

            if (qOdd -> lastNumber == nullptr) {
                qOdd -> firstNumber = newOddNumber;
            } else {
                qOdd -> lastNumber -> nextNumber = newOddNumber;
            }
            qOdd -> lastNumber = newOddNumber;
            cout << "Number: " << newOddNumber -> value << " adicionado a lista de números impares! " << endl;
        }
        currentNumber = currentNumber -> nextNumber;
    }

    cout << endl << "Queue splited!" << endl << endl;
}

/* Print Queue*/
void printQueue (queue* qNumber, string queueName) {
    system("cls");
    number* currentNumber = qNumber -> firstNumber;
    if (currentNumber == nullptr) {
        cout << "The queue is empty!" << endl;
        return;
    }

    cout << "Numbers in the " << queueName << ": " << endl << endl;
    while (currentNumber != nullptr) {
        cout << "Number: " << currentNumber -> value << endl;
        currentNumber = currentNumber -> nextNumber;
    }

    cout << "--------------" << endl;
}

void freeQueue (queue* q) {
    number* currentNumber = q -> firstNumber;
    while (currentNumber != nullptr) {
        number* temp = currentNumber;
        currentNumber = currentNumber -> nextNumber;
        delete temp;
    }
    q -> firstNumber = nullptr;
    q -> lastNumber = nullptr;
}

int main() {
    /* Starting a new number queue */
    queue* newNumber = new queue();
    newNumber -> firstNumber = nullptr;
    newNumber -> lastNumber = nullptr;
    
    /* Starting a new even numbers queue */
    queue* newEvenNumbers = new queue();
    newEvenNumbers -> firstNumber = nullptr;
    newEvenNumbers -> lastNumber = nullptr;

    /* Starting a new odd numbers queue */
    queue* newOddNumbers = new queue();
    newOddNumbers -> firstNumber = nullptr;
    newOddNumbers -> lastNumber = nullptr;

    /* Menu */
    int choice;
    do {
        cout << "Welcome to the Adding Number System!" << endl << endl;
        cout << "1. Add number." << endl;
        cout << "2. Split Queue. (Main function)" << endl;
        cout << "3. Print Queue Original." << endl;
        cout << "4. Print Queue Pares." << endl;
        cout << "5. Print Queue Impares." << endl;
        cout << "6. Exit. " << endl << endl;
        cout << "Choose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insertNumber(newNumber);
                break;
            case 2:
                splitQueue(newNumber, newEvenNumbers, newOddNumbers);
                break;
            case 3:
                printQueue(newNumber, "Original Queue");
                break;
            case 4:
                printQueue(newEvenNumbers, "Even Queue");
                break;
            case 5:
                printQueue(newOddNumbers, "Odd Queue");
                break;
            case 6:
                freeQueue(newNumber);
                freeQueue(newEvenNumbers);
                freeQueue(newOddNumbers);
                delete newNumber;
                delete newEvenNumbers;
                delete newOddNumbers;
                return 0;
            default:
                cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 6);    
}