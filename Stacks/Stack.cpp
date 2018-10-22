//
// Created by Sohil Kaushal on 21/10/18.
//

#include <iostream>
#include "Stack.h"

stack::stack() {
    top = nullptr;
    stackSize = 0;
}

int stack::size() {
    return stackSize;
}

bool stack::isEmpty() {
    return top == nullptr;
}

int stack::topElement() {
    return top->data;
}

void stack::push(int element) {
    node *newNode = new node;
    newNode->data = element;
    newNode->next = nullptr;
    if (isEmpty()) {
        top = newNode;
        top->next = nullptr;
        stackSize++;
    } else {
        newNode->next = top;
        top = newNode;
    }
}

int stack::pop() {
    node *newNode = top;
    top = top->next;
    return newNode->data;
}

void stack::clearStack() {
    while (!isEmpty())
        std::cout << pop() << std::endl;
}


