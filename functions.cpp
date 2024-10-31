//
// Created by Jawad Khadra on 10/30/24.
//


#include "header.h"

/*
 * enqueue - Add a person to the queue
 * @param top - Pointer to the top of the stack
 * @return void
 */
void enqueue(Person*& front, Person*& rear) {

    string name; // INPUT - New person's name
    char gender; // INPUT - New person's gender
    int age;     // INPUT - New person's age

    cout
    << "Who would you like to add?\n"
    << "Enter Name:   ";

    getline(cin, name);

    cout << "Enter Gender: ";
    cin.get(gender);
    cin.ignore();

    cout << "Enter Age:    ";
    cin >> age;
    cin.ignore();

    cout << "\n\n";

    Person* newPerson = new Person{name, gender, age, nullptr};

    if (rear == nullptr) {  // Queue is empty
        front = rear = newPerson;
    } else {  // Add new person at the end
        rear->next = newPerson;
        rear = newPerson;
    }
}

/*
 * dequeue - Remove a person from the queue
 * @return void
 */
void dequeue(Person*& front, Person*& rear) {
    if (front == nullptr) cout << "Can't DEQUEUE from an empty queue!" << endl;
    else {
        cout << "DEQUEUEING\n"
             << "Name:   " << front->name << endl
             << "Gender: " << front->gender << endl
             << "Age:    " << front->age << endl;

        Person* temp = front;
        front = front->next;

        if (front == nullptr) {  // Queue is now empty
            rear = nullptr;
        }

        delete temp;
    }
}

/*
 * isEmpty - Check if the stack is empty
 * @param top - Pointer to the top of the stack
 * @return bool - True if the stack is empty, false otherwise
 */
bool isEmpty(Person* front) { return front == nullptr; }

/*
 * front - Get the front of the queue
 * @param front - Pointer to the front of the queue
 */
void front(Person* front) {
    if (isEmpty(front)) {
        cout << "Nobody in FRONT, the queue is empty!!" << endl;
    } else {
        cout << "The first person in the queue is:\n"
             << "Name:   " << front->name << endl
             << "Gender: " << front->gender << endl
             << "Age:    " << front->age << endl << endl;
    }
}

/*
 * size - Get the size of the queue
 * @param top - Pointer to the top of the stack
 * @return int - Size of the queue
 */
int size(Person* top) {
    int count = 0;
    Person* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

/*
 * clear - Clear the queue
 * @param front - Pointer to the front of the queue
 * @return void
 */
void clear(Person* &front) {
    if (isEmpty(front)) cout << "The QUEUE is ALREADY clear!";
    else {
        Person* current = front;
        cout << "CLEARING..." << endl;
        while (current != nullptr) {
            cout << "\n" << current -> name;;
            Person* temp = current;
            current = current->next;
            delete temp;
        }
        front = nullptr;
        cout << endl << endl << "The queue has been CLEARED!";
    }
}
