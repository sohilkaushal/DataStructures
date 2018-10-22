#include <iostream>
#include "Vectors/customVector.h"
#include "Linked List/linkedList.h"
#include "Stacks/Stack.h"

using namespace std;


void testVector();

void testLinkedList();

void testStack();
// Main Driver Used for testing
int main() {
    cout << "Current Tests Available " << endl;
    cout << "\tEnter 1 for Vector" << endl;
    cout << "\tEnter 2 for Linked List" << endl;
    cout << "\tEnter 3 for Stack" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            testVector();
            break;
        case 2:
            testLinkedList();
            break;
        case 3:
            testStack();
            break;
        default:
            cout << "Invalid Argument" << endl;
            break;
    }
    return 0;
}

void testVector() {
    cout << "Creating Vector" << endl;
    customVector vector;
    for (int i = 0; i < 9; i++)
        vector.add(i);
    vector.print();
    cout << "Testing contains:\t";
    cout << vector.contains(3) << "\t" << vector.contains(11) << endl;
}

void testLinkedList() {
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
}

void testStack() {
    cout << "Creating Stack" << endl;
    stack stackObj;
    for (int i = 0; i < 9; i++) {
        cout << "Pushing " << i << " onto the Stack" << endl;
        stackObj.push(i);
    }
    cout << "Popping the stack" << endl;
    stackObj.clearStack();
}