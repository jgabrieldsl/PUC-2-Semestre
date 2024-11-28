/* Practical challenge - The objective of the challenge is to implement a queue service system, where customers are served in the order they arrive. */

#include <iostream>
#include <string> // String Manipulation
using namespace std;

struct clientQueue {
    int clientID;
    string clientName;
    clientQueue* nextClientQueue;
};

struct queue {
    clientQueue* firstClient;
    clientQueue* lastClient;
};

/* Add customer to queue */
void insertClient(queue* q) {
    system("cls"); // or clear for macOS/Linux
    cout << " ==== Inserting Client in the Queue! ==== " << endl << endl;
    /* input clientID & clientName values */
    int clientID;
    cout << "Enter the client ID: ";
    cin >> clientID;

    string clientName;
    cout << "Enter the name of the client who will enter the queue: ";
    cin.ignore(); getline (cin, clientName);

    /* inserting values in queue*/
    clientQueue* newClient = new clientQueue(); // Create a new node.
    newClient -> clientID = clientID;
    newClient -> clientName = clientName;
    newClient -> nextClientQueue = nullptr; // lastClient always pointer to nullptr.

    /* Verification: last of the queue is null? */
    if (q -> lastClient == nullptr) { // Yes? Queue is empty.
        q -> firstClient = newClient;
    } else { // No? We point to nextClientQueue, from the current lastClient, to newClient.
        q -> lastClient -> nextClientQueue = newClient;
    }

    /* Finally we set the lastClient to the newClient that was added */
    q -> lastClient = newClient;

    cout << "Customer added to queue successfully!" << endl << endl;
}

/* Serve customer in queue */
int attendClient(queue* q) {
    system("cls"); // or clear for macOS/Linux
    cout << " ==== Serving the customer! ==== " << endl << endl;

    /* if firstClient is null, it means the queue is empty. Returns -1 to identify the error. */
    if (q -> firstClient == nullptr) {
        cout << "The Queue is empty!" << endl;
        return -1;
    }

    /* Saving temporarily the client values that was served, for returning in finally function */
    clientQueue* temp = q -> firstClient;
    int tempID = temp -> clientID;
    string tempName = temp -> clientName;

    q -> firstClient = q -> firstClient -> nextClientQueue; // Definindo o próximo client como current client.

    /* If firstClient is null, it means the queue is empty, so lastClient must also be null. */
    if (q -> firstClient == nullptr) {
        q -> lastClient = nullptr;
        cout << "The line had customers, but now it's empty! " << tempName << " was answered!" << endl;
    }

    cout << "The client: " << tempName << " was answered!" << endl << endl;
    
    delete temp; // Removing from memory the space allocated to the customer that was served
    return tempID; // Return clientID that was served
}

/* Print on the screen customers who are in the queue */
void printQueue(queue* q) {
    system("cls"); // or clear for macOS/Linux
    clientQueue* currentClient = q -> firstClient;
    if (currentClient == nullptr) {
        cout << "The Queue is empty!" << endl << endl;;
        return;
    }

    cout << "Customers in queue: " << endl << endl;
    while (currentClient != nullptr) {
        cout << "ID: " << currentClient -> clientID << endl;
        cout << "Name: " << currentClient -> clientName << endl << endl;
        currentClient = currentClient -> nextClientQueue;
    }

    cout << "------------------------- " << endl << endl;
}

/* Free memory alocated by the queue (use only if customers have been served) */
void freeQueue(queue* q) {
    clientQueue* currentClient = q -> firstClient;
    while (currentClient != nullptr) {
        clientQueue* temp = currentClient;
        currentClient = currentClient -> nextClientQueue;
        delete temp;
    }

    q -> firstClient = nullptr;
    q -> lastClient = nullptr;
}

int main() {
    // Starting a new queue
    queue* newClientQueue = new queue();
    newClientQueue -> firstClient = nullptr;
    newClientQueue -> lastClient = nullptr;
    
    int choice;
    do {
        cout << "Welcome to the Customer Service System!" << endl << endl;
        cout << "1. Add Customer" << endl;
        cout << "2. Serve Customer" << endl;
        cout << "3. View Queue" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "Choose an option: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                insertClient(newClientQueue);
                break;
            case 2:
                attendClient(newClientQueue);
                break;
            case 3:
                printQueue(newClientQueue);
                break;
            case 4:
                freeQueue(newClientQueue);
                delete newClientQueue;
                return 0;
            default:
                cout << "Invalid choice! Try again..." << endl;
        }
    } while (choice != 4);
}