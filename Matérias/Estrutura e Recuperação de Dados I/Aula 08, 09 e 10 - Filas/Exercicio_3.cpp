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
void insertIntoQueue (queue* q, int value) {
    /* Criando um novo nó na fila recebida*/
    number* newNumber = new number();
    newNumber -> value = value;
    newNumber -> nextNumber = nullptr;

    /* Verificando se a lista recebida está vazia*/
    if (q -> lastNumber == nullptr) {
        q -> firstNumber = newNumber;
    } else {
        q -> lastNumber -> nextNumber = newNumber;
    }
    q -> lastNumber = newNumber;
}

void insertNumber(queue* q) {
    system("clear");
    cout << "==== Inserting Value in the Number Queue ====" << endl << endl;
    /* Input value */
    int value;
    cout << "Insert the Number: ";
    cin >> value;

    insertIntoQueue (q, value);
    cout << "Number added to queue successfully!" << endl << endl;
}

/* Inserting Number in Queue End*/

/* Split Numbers (Main Function) */
void splitQueue (queue* q, queue* qEven, queue* qOdd) {
    system("clear");
    cout << "==== Split Values in the Number Queue ====" << endl << endl;

    number* currentNumber = q -> firstNumber;

    while (currentNumber != nullptr) {

        if (currentNumber -> value % 2 == 0) {
            insertIntoQueue (qEven, currentNumber -> value);
            cout << "Number: " << currentNumber -> value << " adicionado a lista de número pares! " << endl;
        } else {
            insertIntoQueue (qOdd, currentNumber -> value);
            cout << "Number: " << currentNumber -> value << " adicionado a lista de números impares! " << endl;
        }
        currentNumber = currentNumber -> nextNumber;
    }

    cout << endl << "Queue splited!" << endl << endl;
}

/* Print Queue*/
void printQueue (queue* qNumber, string queueName) {
    system("clear");
    cout << "==== Print Values in the Queue ====" << endl << endl;
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

/* Free Memory alocated for Queue's */
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