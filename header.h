//
// Created by Jawad Khadra on 10/30/24.
//

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;  // INPUT - Name of the person
    char gender;  // INPUT - Gender of the person
    int age;      // INPUT - Age of the person
    Person* next; // INPUT - Pointer to the next person in the queue
};

/*
 * Lab 9A: Implement A Queue
 *
 * This program allows the user to enqueue and dequeue people, as well as check if the queue is empty, see the size, see the front of the queue, and clear the queue.
 * This program uses a linked list to store the people in the queue.
 */

/*
 * printHeading - Print the heading of the lab
 * @return void
 */
void printHeading();

/*
 * enqueue - Add a person to the queue
 * @param front - Pointer to the front of the queue
 * @param rear - Pointer to the rear of the queue
 */
void enqueue(Person*& front, Person*& rear);

/*
 * dequeue - Remove a person from the queue
 * @param front - Pointer to the front of the queue
 * @param rear - Pointer to the rear of the queue
 */
void dequeue(Person* &front);

/*
 * IsEmpty - Check if the stack is empty
 * @param front - Pointer to the front of the queue
 * @return bool - True if the stack is empty, false otherwise
 */
bool isEmpty(Person* front);

/*
 * front - Get the front of the queue
 * @param front - Pointer to the front of the queue
 */
void front(Person* front);

/*
 * size - Get the size of the queue
 * @param front - Pointer to the front of the queue
 * @return int - Size of the queue
 */
int size(Person* front);

/*
 * clear - Clear the queue
 * @param front - Pointer to the front of the queue
 */
void clear(Person* &front);

#endif //HEADER_H
