//
// Created by Sohil Kaushal on 18/10/18.
//

#ifndef DATASTRUCTURES_CUSTOMVECTOR_H
#define DATASTRUCTURES_CUSTOMVECTOR_H

// Vector Class
class customVector {
    int defaultCapacity = 1, capacity, count, *array;
public:
    // Constructor
    customVector();

    // Checks if the Vector contains a given element
    bool contains(int number);

    // Adds an element to the end of Vector
    void add(int number);

    // Increases the capacity of Vector in case of overflow
    void increaseCapacity();

    // Prints the vector
    void print();
};


#endif //DATASTRUCTURES_CUSTOMVECTOR_H
