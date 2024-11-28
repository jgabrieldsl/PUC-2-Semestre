/* Exercise 4 - Escreva uma função que inverta a ordem dos elementos em uma fila. */

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
void insertNumber (queue* q) {
    system("clear");
    int value;
    cout << "Digite o valor: ";
    cin >> value;
    
    /**/
    number* newNumber = new number();
    newNumber -> value = value;
    newNumber -> nextNumber = nullptr;
    if (q -> lastNumber == nullptr) {
        q -> firstNumber = newNumber;
    } else {
        q -> lastNumber -> nextNumber = newNumber;
    }
    q -> lastNumber = newNumber;
    cout << "Number inserted!" << endl;
}

void reverseQueue (queue* q) {
    system("clear");

    if (q -> firstNumber == nullptr) {
        cout << "The queue is empty!" << endl;
        return;
    }

    number* prev = nullptr;
    number* current = q -> firstNumber;
    number* next = nullptr;

    // Antes:  1 -> 2 -> 3 -> 4 -> Null
    // Depois: Null <- 1 <- 2 <- 3 <- 4
    while (current != nullptr) {
        next = current -> nextNumber; // 2 | 3 | 4 | Null
        current -> nextNumber = prev; // 1 aponta para NULL | 2 aponta para 1 | 3 aponta para 2 | 4 aponta para 3
        prev = current; // 1 | 2 | 3 | 4
        current = next; // 2 | 3 | 4 | Null (Ciclo se encerra)
    }

    q -> firstNumber = prev; // ⚠️ Sempre lembrar de atualizar o head, firstNumber no caso.

    cout << "Success Reverse Queue!" << endl << endl;
}


void printQueue (queue* q) {
    system("clear");
    number* currentNumber = q -> firstNumber;
    if (currentNumber == nullptr) {
        cout << "The Queue is empty!" << endl << endl;;
        return;
    }
    
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

    /* Menu */
    int choice;
    do {
        cout << "Welcome to the Adding Number System!" << endl << endl;
        cout << "1. Add number." << endl;
        cout << "2. Reverse queue elements. (Main Function)" << endl;
        cout << "3. Show Queue. " << endl;
        cout << "4. Exit. " << endl << endl;
        cout << "Choose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insertNumber(newNumber);
                break;
            case 2:
                reverseQueue(newNumber);
                break;
            case 3:
                printQueue(newNumber);
                break;
            case 4:
                freeQueue(newNumber);
                delete newNumber;
                return 0;
            default:
                cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 4);    
}