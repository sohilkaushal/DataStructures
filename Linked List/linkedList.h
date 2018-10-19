//
// Created by Sohil Kaushal on 18/10/18.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H

// Linked List class
class linkedList {
    // Node for Linked List
    class node {
    public:
        int data;
        node *next;
    } *start;

public:
    // Constructor
    linkedList();

    // Adds an element to the end of Linked List
    void addElement(int number);

    // Checks if the Linked List contains a given element
    bool contains(int number);

    // Deletes the last element in the Linked List
    void deleteLastElement();

    // Prints the whole list from start to end
    void printList();
};


#endif //DATASTRUCTURES_LINKEDLIST_H
