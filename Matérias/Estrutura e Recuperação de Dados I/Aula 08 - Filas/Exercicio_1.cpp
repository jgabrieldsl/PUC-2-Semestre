/* Exercise 1 - Escreva uma função que conte quantos números pares existem em uma fila e retorne essa quantidade. */

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
    system("cls");
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
    system("cls");
    int cont = 0;
    number* currentNumber = q -> firstNumber;
    while ( currentNumber != nullptr ) {
        if ( currentNumber -> value % 2 == 0) cont++;
        currentNumber = currentNumber -> nextNumber;
    }

    cout << "Even Numbers in the Queue: " << cont << endl << endl;;
    return cont;    
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
        cout << "1. Add number" << endl;
        cout << "2. How many even numbers are there in the queue?" << endl;
        cout << "3. Exit" << endl << endl;
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
                freeQueue(newNumber);
                delete newNumber;
                return 0;
            default:
                cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 4);
}