//
// Created by Sohil Kaushal on 22/10/18.
//

#include "tree.h"

tree::tree() {
    root = nullptr;
}

void tree::addElement(tree::node *root, int element) {
    node *newNode = new node;
    newNode->data = element;
    if (root == nullptr) {
        root = newNode;
        root->rightChild = root->leftChild = nullptr;
    } else if (element > root->data) {
        addElement(root->rightChild, element);
    } else addElement(root->leftChild, element);

}
