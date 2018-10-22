//
// Created by Sohil Kaushal on 22/10/18.
//

#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H


#include <mach/mach_types.h>

class queue {
    class node {
    public:
        int data;
        node *next;
    };

    node *front, *back;
public:
    queue();

    void enqueue(int element);

    void dequeue();

    node *peek();

    bool isEmpty();

    void display();

    void emptyQueue();
};


#endif //DATASTRUCTURES_QUEUE_H
