//
// Created by Sohil Kaushal on 22/10/18.
//

#include <iostream>
#include "queue.h"

queue::queue() {
    back = front = nullptr;
}

void queue::enqueue(int element) {
    node *newNode = new node;
    newNode->data = element;
    newNode->next = nullptr;
    if (isEmpty())
        back = front = newNode;
    else {
        back->next = newNode;
        back = newNode;
    }
}

void queue::dequeue() {
    if (isEmpty()) {
        std::cout << "Underflow" << std::endl;
        return;
    }
    front = front->next;
}

bool queue::isEmpty() {
    if (peek() == nullptr) {
        return peek() == back || peek() == nullptr;
    } else {
        return peek() == nullptr;
    }
}

queue::node *queue::peek() {
    return front;
}

void queue::display() {
    node *newNode = peek();
    if (!isEmpty()) {
        std::cout << "The Members of the queue are: " << std::endl;
        while (newNode != nullptr) {
            std::cout << newNode->data << "\t";
            newNode = newNode->next;
        }
        std::cout << std::endl;
    }
}

void queue::emptyQueue() {
    while (!isEmpty()) {
        dequeue();
        display();
    }
}
