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

bool linkedList::contains(int number) {
    node *temp = start;
    while (temp != nullptr) {
        if (temp->data == number)
            return true;
        temp = temp->next;
    }
    return false;
}

void linkedList::deleteLastElement() {
    node *toDelete, *demiLastNode;
    if (start == nullptr) {
        std::cout << "Linked List is empty\n";
        return;
    } else {
        toDelete = start;
        demiLastNode = start;
        while (toDelete->next != nullptr) {
            demiLastNode = toDelete;
            toDelete = toDelete->next;
        }
        if (toDelete == start)
            start = nullptr;
        else
            demiLastNode->next = nullptr;
        delete toDelete;
    }

}

void linkedList::printList() {
    node *temp = start;
    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}