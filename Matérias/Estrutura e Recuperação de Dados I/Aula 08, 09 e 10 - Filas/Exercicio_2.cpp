/* Exercise 1 - Write a function that counts how many even numbers there are in a row and returns that amount. */
/* I created this function to remove any number chosen by the user!*/

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
    cout << "==== Inserting Value in the Number Queue ====" << endl << endl;
    /* Input value */
    int value;
    cout << "Insert the Number: ";
    cin >> value;

    /*  */
    number* newNumber = new number();
    newNumber -> value = value;
    newNumber -> nextNumber = nullptr;

    if (q -> lastNumber == nullptr) q -> firstNumber = newNumber;
    else q -> lastNumber -> nextNumber = newNumber;

    q -> lastNumber = newNumber; // 

    cout << "Number added to queue successfully!" << endl << endl;

}

/* Evem Numbers Count '*/
int evenNumbers (queue* q) {
    system("clear");
    int cont = 0;
    number* currentNumber = q -> firstNumber;
    while ( currentNumber != nullptr ) {
        if ( currentNumber -> value % 2 == 0) cont++;
        currentNumber = currentNumber -> nextNumber;
    }

    cout << "Even Numbers in the Queue: " << cont << endl << endl;;
    return cont;    
}

void removeValue (queue* q) {
    int value;
    cout << "Remove the number: ";
    cin >> value;
    number* prevNumber = nullptr;
    number* currentNumber = q -> firstNumber;
    while (currentNumber != nullptr) { 
        if (currentNumber -> value == value) { 
            /* Caso o valor esteja no inicio da fila...*/
            if (prevNumber == nullptr) {
                q -> firstNumber = currentNumber -> nextNumber; // O primeiro elemento passa a ser igual ao segundo

                /* Primeiro elemento fica nulo? Quer dizer que a fila está vazia e define o último como nulo também */
                if (q -> firstNumber == nullptr) {
                    q -> lastNumber = nullptr;
                }
                
                delete currentNumber; // Libera o espaço na memória do atual currentNumber
                currentNumber = q -> firstNumber; // CurrentNumber passa a ser o próximo elemento da fila.
            
            
            } else { /* Caso o valor esteja no meio da fila...*/
                prevNumber -> nextNumber = currentNumber -> nextNumber; // O elemento anterior passa a apontar para o próximo elemento do atual elemento.
                
                /* Caso o valor sejá o último da fila */
                if (q -> lastNumber == currentNumber) {
                    q -> lastNumber = prevNumber; // Define o último como o anterior ao elemento que está sendo removido
                    q -> lastNumber -> nextNumber = nullptr; // Aponta-o para nullptr, satisfazendo a regra.
                }

                delete currentNumber; // Liberando o espaço na memória reservado para o atual currentNumber
                currentNumber = prevNumber -> nextNumber; // Passando para o próximo elemento, leia o código para entender pq: 'prevNumber -> nextNumber' ao invés de 'currentNumber -> nextNumber'.
            }   
        } else {
            prevNumber = currentNumber;
            currentNumber = currentNumber -> nextNumber; // Passando para o próximo nó
        }
    }
}

/* Print on the screen customers who are in the queue */
void printQueue(queue* q) {
    system("clear"); // or clear for macOS/Linux
    number* currentNumber = q -> firstNumber;
    if (currentNumber == nullptr) {
        cout << "The Queue is empty!" << endl << endl;;
        return;
    }

    cout << "Numbers in queue: " << endl << endl;
    while (currentNumber != nullptr) {
        cout << "Number: " << currentNumber -> value << endl;
        currentNumber = currentNumber -> nextNumber;
    }
    cout << "------------------------- " << endl << endl;
}

/* */
void freeQueue (queue* q) {
    number* currentNumber = q -> firstNumber;
    while ( currentNumber != nullptr ) {
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
        cout << "2. How many even numbers are there in the queue?." << endl;
        cout << "3. Remove value from queue. (Main function)" << endl;
        cout << "4. Print Queue." << endl;
        cout << "5. Exit. " << endl << endl;
        cout << "Choose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insertNumber(newNumber);
                break;
            case 2:
                evenNumbers(newNumber);
                break;
            case 3:
                removeValue(newNumber);
                break;
            case 4:
                printQueue(newNumber);
                break;
            case 5:
                freeQueue(newNumber);
                delete newNumber;
                return 0;
            default:
                cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 5);
}