/* Exercício 7 - Dada uma lista A com 10 elementos representando as idades de um grupo de pessoas, escreva um programa que determine a idade média e a quantidade de elementos que estão abaixo da média. */

#include <iostream>
#include <string> // String Manipulation
using namespace std;

struct people {
    string name;
    int age;
    people* nextPeople;
};

void insertPeople (people** head, int quantityPeople) {
    string peopleName;
    int peopleAge;
    for (int i = 0; i < quantityPeople; i++) {
        /* Input the people values */
        cout << "Insert " << i + 1 << "° people name: ";
        getline(cin, peopleName);
        cout << "Insert " << i + 1 << "° people age: ";
        cin >> peopleAge;
        cin.ignore();

        /* Inserting de people values in list */
        people* newPeople = new people(); 
        newPeople -> name = peopleName;
        newPeople -> age = peopleAge;
        newPeople -> nextPeople = *head; // Adding the people on first position in list.
        *head = newPeople;
    }
    cout << endl << quantityPeople << " people successfully inserted!" << endl << endl;
}

int middleAgeCalcule (people* head, int quantityPeople) {
    int middleAge = 0;
    while (head != NULL) {
        middleAge += head -> age;
        head = head -> nextPeople; // Next people on list
    }
    return middleAge / quantityPeople;
}

int belowMiddleAge (people* head, int middleAge) {
    int belowMiddleAge = 0;
    while (head != NULL) {
        if (head -> age < middleAge) {
            belowMiddleAge++;
        }
        head = head -> nextPeople;
    }
    return belowMiddleAge;
}

void printList (people* head) {
    cout << "People registered on the list: " << endl;
    while (head != NULL) {
        cout << "Name: " << head -> name << endl;
        cout << "Age: " << head -> age << endl;
        head = head -> nextPeople;
        cout << endl;
    }
}

int main() {
    /* Defining Variables */
    people* head = NULL;
    int quantityPeople = 5;
    
    insertPeople(&head, quantityPeople); // Inserting People
    int middleAge = middleAgeCalcule(head, quantityPeople); // MiddleAge

    /* Print Values */
    printList(head);
    cout << "Middle Age: " << middleAge << endl;
    cout << "People below average age: " << belowMiddleAge(head, middleAge) << endl;

    return 0;
}
