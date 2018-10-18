//
// Created by Sohil Kaushal on 18/10/18.
//

#include <iostream>
#include "customVector.h"

customVector::customVector() {
    capacity = defaultCapacity;
    count = 0;
    array = new int[defaultCapacity];
}

void customVector::increaseCapacity() {
    int *newArray = new int[++capacity];
    for (int i = 0; i < count; i++)
        newArray[i] = array[i];
    delete array;
    array = newArray;
}

int customVector::add(int number) {
    if (count == capacity) {
        increaseCapacity();
        add(number);
    } else
        array[count++] = number;
}

bool customVector::contains(int number) {
    for (int i = 0; i < count; i++)
        if (array[i] == number)
            return true;
    return false;
}

void customVector::print() {
    for (int i = 0; i < count; i++)
        std::cout << array[i] << "\t";
    std::cout << "\n";
}
