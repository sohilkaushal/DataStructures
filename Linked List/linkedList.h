//
// Created by Sohil Kaushal on 18/10/18.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

// Linked List class
class linkedList {
    int count;
    // Node for Linked List
    class node {
    public:
        int data;
        node *next;
    } *start;

public:

    // Constructor
    linkedList();

    // returns the count of the elements in Linked List
    inline int countList();

    // Checks if the list is empty
    bool isEmpty();

    // Adds an element to the end of Linked List
    void addElement(int number);

    // Inserts an element in front of the Linked List
    void addInFront(int number);

    // Checks if the Linked List contains a given element
    bool contains(int number);

    // Deletes the last element in the Linked List
    void deleteLastElement();

    // Clears the Linked List of all data
    void clearList();

    // Prints the whole list from start to end
    void printList();
};


#endif //DATASTRUCTURES_LINKEDLIST_H
