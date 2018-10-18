//
// Created by Sohil Kaushal on 18/10/18.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H


class linkedList {
    class node {
    public:
        int data;
        node *next;
    } *start;

public:
    linkedList();

    void addElement(int number);

    void contains(int number);

    void deleteElement(int number);

    void printList();
};


#endif //DATASTRUCTURES_LINKEDLIST_H
