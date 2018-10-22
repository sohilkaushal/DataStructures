//
// Created by Sohil Kaushal on 21/10/18.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H


class stack {
    class node {
    public:
        int data;
        node *next;
    };

    int stackSize;
    node *top;
public:
    stack();

    int size();

    bool isEmpty();

    int topElement();

    void push(int element);

    int pop();

    void clearStack();
};


#endif //DATASTRUCTURES_STACK_H
