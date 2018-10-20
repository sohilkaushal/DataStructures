#include <iostream>
#include "Vectors/customVector.h"
#include "Linked List/linkedList.h"

using namespace std;

// Main Driver Used for testing
int main() {
    cout << "Creating Vector" << endl;
    customVector vector;
    for (int i = 0; i < 9; i++)
        vector.add(i);
    vector.print();
    cout << "Testing contains:\t";
    cout << vector.contains(3) << "\t" << vector.contains(11) << endl;
    cout << endl << "Creating List" << endl;
    linkedList list;
    list.addElement(1);
    list.addElement(5);
    cout << "Testing contains:\t";
    cout << list.contains(3) << "\t" << list.contains(5) << endl;
    list.printList();
    for (int i = 0; i < 9; i++) {
        list.addElement(i);
        list.printList();
    }
    list.printList();
    cout << "Deleting Last Element" << endl;
    list.deleteLastElement();
    list.printList();
    cout << "Inserting elements in the front of the Linked List" << endl;
    for (int i = 0; i < 15; i++) {
        list.addInFront(i);
        list.printList();
    }
    cout << "Clearing the Linked List" << endl;
    list.clearList();
    return 0;
}