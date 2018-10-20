//
// Created by Sohil Kaushal on 18/10/18.
//

#include <iostream>
#include "customVector.h"

// Initializes the Vector with default capacity
customVector::customVector() {
    capacity = defaultCapacity;
    count = 0;
    array = new int[defaultCapacity];
}

// Increases the capacity of the Vector in case of overflow
void customVector::increaseCapacity() {
    // A new array with more capacity
    int *newArray = new int[++capacity];
    // Copying the old array into a new array
    for (int i = 0; i < count; i++)
        newArray[i] = array[i];
    // Deleting the old array
    delete array;
    // Setting the old array as the new array
    array = newArray;
}

// Adds an element to the Vector
void customVector::add(int number) {
    // Checks for overflow
    if (count == capacity) {
        // First increasing capacity and then adding the number
        increaseCapacity();
        add(number);
    } else
        // Adding element
        array[count++] = number;
}

// Checks if the vector contains a particular element
bool customVector::contains(int number) {
    for (int i = 0; i < count; i++)
        if (array[i] == number)
            return true;
    return false;
}

// Prints the vector in a clearly formatted manner
void customVector::print() {
    for (int i = 0; i < count; i++)
        std::cout << array[i] << "\t";
    std::cout << "\n";
}
