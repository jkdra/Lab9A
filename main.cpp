/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * LAB #9A - Implement A Queue
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : Oct. 30, 2024
 */

#include "header.h"

using namespace std;

/*
 * Lab 9A: Implement A Queue
 *
 * This program allows the user to enqueue and dequeue people, as well as check if the queue is empty, see the size, see the front of the queue, and clear the queue.
 * This program uses a linked list to store the people in the queue.
 */

// main
int main() {
    Person* queueFront = nullptr;  // Pointer to the front of the queue
    Person* rear = nullptr;   // Pointer to the rear of the queue
    int menuInput;           // INPUT - User's input choice

    printHeading();

    do {
        cout
        << "\n\nQUEUE MENU:\n"
        << "1 – ENQUEUE (Add a person)\n"
        << "2 – DEQUEUE (Remove a person)\n"
        << "3 - ISEMPTY (Is the queue empty?)\n"
        << "4 - FRONT   (Who is in front?)\n"
        << "5 – SIZE    (How many people are there?)\n"
        << "6 - Clear the Queue\n"
        << "0 – Exit\n"
        << "\nEnter a command? ";

        cin >> menuInput;

        // Invalid Input Check
        if (cin.fail()) {
            cout << "\n**** Please input a number between 0 and 6 ****\n";
            cin.clear();
            cin.ignore();
            menuInput = NULL;
            continue;
        }

        // Clear the input buffer
        cin.clear();
        cin.ignore();

        switch (menuInput) {

            // Input Check
            default:
                cout << "\n**** The number " << menuInput << " is an invalid entry ****\n";
                cout << "\n**** Please input a number between 0 and 6 ****\n";
                break;
            case 0:
                // Do nothing, program will exit
                break;
            case 1:
                // Add a person to the queur
                enqueue(queueFront, rear);
                break;
            case 2:
                // Remove a person from the queue
                dequeue(queueFront, rear);
                break;
            case 3:
                cout << (isEmpty(queueFront) ? "Yes, the QUEUE is empty." : "The QUEUE is NOT empty.") << endl;
                isEmpty(queueFront);
                break;
            case 4:
                // Check the front of the queue
                front(queueFront);
                break;
            case 5:
                if (size(queueFront) == 0) cout << "Nobody is in the queue!\n";
                else if (size(queueFront) == 1) cout << "There is one person in the queue.\n";
                else cout << "There are " << size(queueFront) << " people in the queue.\n";
                break;
            case 6:
                // Clear the queue
                clear(queueFront);
                break;
        }
    } while (menuInput != 0);
    return 0;
}
