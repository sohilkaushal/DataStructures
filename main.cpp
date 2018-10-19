#include <iostream>
#include "Vectors/customVector.h"
#include "Linked List/linkedList.h"

using namespace std;

// Main Driver Used for testing
int main() {
    cout << "Creating Vector" << endl;
    customVector vector;
    vector.add(1);
    vector.add(2);
    vector.add(3);
    cout << "Testing contains:\t";
    cout << vector.contains(3) << "\t" << vector.contains(5) << endl;
    vector.print();
    cout << "Creating List" << endl;
    linkedList list;
    list.addElement(1);
    list.addElement(5);
    cout << "Testing contains:\t";
    cout << list.contains(3) << "\t" << list.contains(5) << endl;
    list.printList();
    for (int i = 0; i < 9; i++) {
        list.addElement(i);
    }
    list.printList();
    cout << "Deleting Last Element" << endl;
    list.deleteLastElement();
    list.printList();
    return 0;
}