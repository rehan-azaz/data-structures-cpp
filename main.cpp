#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main()
{
    // List
    LinkedList list;

    // isEmpty
    cout << "isEmpty: " << list.isEmpty() << endl;

    // Size
    cout << "Size: " << list.getSize() << endl;

    // Append
    list.append(10);
    list.append(30);
    list.append(20);
    list.append(30);
    list.append(40);

    // Prepend
    list.prepend(9);

    // Remove
    list.remove(30);

    // isEmpty
    cout << "isEmpty: " << list.isEmpty() << endl;

    // Size
    cout << "Size: " << list.getSize() << endl;

    // Search 10
    cout << "Search 10: " << list.search(10) << endl;

    // Search 50
    cout << "Search 50: " << list.search(50) << endl;

    // Display
    list.display();

    // Remove At Index
    list.removeAt(4);

    // Get At Index
    cout << "At index 2: " << list.getAt(2) << endl;

    // Display
    list.display();

    // insertAfter
    Node *node = new Node(30);
    list.insertAfter(node, 14);

    Node *node2 = new Node(19);
    list.insertAfter(node2, 25);

    // Display
    list.display();

    // Reverse
    list.reverse();

    // Display
    list.display();

    return 0;
}