#include <iostream>
#include "customVector.h"
#include "linkedList.h"

using namespace std;

int main() {
    cout << "Creating Vector" << endl;
    customVector vector;
    linkedList list;
    vector.add(1);
    vector.add(2);
    vector.add(3);
    cout << "Testing contains:\t";
    cout << vector.contains(3) << "\t" << vector.contains(5) << endl;
    vector.print();
    list.addElement(1);
    list.addElement(5);
    list.printList();
    return 0;
}