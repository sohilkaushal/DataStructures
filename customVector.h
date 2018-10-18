//
// Created by Sohil Kaushal on 18/10/18.
//

#ifndef DATASTRUCTURES_CUSTOMVECTOR_H
#define DATASTRUCTURES_CUSTOMVECTOR_H


class customVector {
    int defaultCapacity = 1, capacity, count, *array;
public:
    customVector();

    bool contains(int number);

    int add(int number);

    void increaseCapacity();

    void print();
};


#endif //DATASTRUCTURES_CUSTOMVECTOR_H
