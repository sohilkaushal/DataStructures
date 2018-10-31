//
// Created by Sohil Kaushal on 22/10/18.
//

#ifndef DATASTRUCTURES_TREE_H
#define DATASTRUCTURES_TREE_H


class tree {
    class node {
    public:
        int data;
        node *leftChild;
        node *rightChild;
    };

    node *root;
public:
    tree();

    void addElement(node *root, int element);

    void searchElement(node *root, int element);
};


#endif //DATASTRUCTURES_TREE_H
