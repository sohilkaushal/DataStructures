//
// Created by Sohil Kaushal on 18/10/18.
//

#include <iostream>
#include "linkedList.h"

// Initializing the Linked List
// Setting Count to 0 and setting start to null
linkedList::linkedList() {
    count = 0;
    start = nullptr;
}

// Returns the count of List
inline int linkedList::countList() {
    return count;
}

// Checks if the List is empty
bool linkedList::isEmpty() {
    if (start == nullptr) {
        std::cout << "Linked List is empty\n";
        return true;
    }
    return false;
}

// Adds an element in the end of the List
void linkedList::addElement(int number) {
    node *newNode = new node; // A new element that will be inserted at the end of the List
    newNode->data = number;
    newNode->next = nullptr;
    if (start == nullptr) {
        // Setting the new element as first element of List
        start = newNode;
        // Increasing the count of List
        count++;
        return;
    }
    node *itr = start;
    // Iterating to the end of the List
    while (itr->next != nullptr) {
        itr = itr->next;
    }
    // Adding newly inserted element to the end of the List
    itr->next = newNode;
    count++;   // Increasing the count of List
}

// Adds an element in front of the List
void linkedList::addInFront(int number) {
    node *newNode = new node; // A new element that will be inserted at the end of the List
    newNode->data = number;
    newNode->next = start;
    start = newNode;
    // Increasing the count of List
    count++;
}

// Checks if an element is contained inside the List
bool linkedList::contains(int number) {
    node *temp = start;
    while (temp != nullptr) {
        if (temp->data == number)
            return true;
        temp = temp->next;
    }
    return false;
}

// Deletes the last element in the List
void linkedList::deleteLastElement() {
    node *toDelete, *demiLastNode;
    // Checks if List is empty
    if (!isEmpty()) {
        // Sets the first node as the one to be deleted and its previous node
        toDelete = start;
        demiLastNode = start;
        // Iterating till the end of the List
        while (toDelete->next != nullptr) {
            // Sets the previous node as current
            demiLastNode = toDelete;
            // Sets the current node to next
            toDelete = toDelete->next;
        }
        // If there is only one element then set starting point to null
        // Else set the node previous to last node as last node
        if (toDelete == start)
            start = nullptr;
        else
            demiLastNode->next = nullptr;
        // delete the newly freed element and decrease the count
        delete toDelete;
        count--;
    }
}

// Deletes all the elements from the List
void linkedList::clearList() {
    // Iterating the List and deleting the last element until the List is empty
    while (!isEmpty()) {
        deleteLastElement();
    }
    std::cout << "List Cleared\n";
    printList();
}

// Prints all the elements inside the List in a proper format
void linkedList::printList() {
    node *temp = start;
    std::cout << "Count of elements: " << countList() << "\t Elements: ";
    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}








