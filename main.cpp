#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
    Node *node = new Node(10);
    Node *node2 = new Node(20);

    cout << node->getData() << endl;
    cout << node->getNext() << endl;

    node->setNext(node2);

    cout << node->getNext() << endl;
    cout << node->getNext()->getData() << endl;

    delete node;

    return 0;
}