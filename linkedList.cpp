//
// Created by Sohil Kaushal on 18/10/18.
//

#include <iostream>
#include "linkedList.h"

linkedList::linkedList() {
    start = nullptr;
}

void linkedList::addElement(int number) {
    node *temp = new node;
    temp->data = number;
    temp->next = nullptr;
    if (start == nullptr) {
        start = temp;
        return;
    }
    node *itr = start;
    while (itr->next != nullptr) {
        itr = itr->next;
    }
    itr->next = temp;
}

void linkedList::contains(int number) {

}

void linkedList::deleteElement(int number) {

}

void linkedList::printList() {
    node *temp = start;
    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}