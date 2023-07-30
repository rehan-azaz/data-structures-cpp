

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack stack;

    // Enqueue
    stack.push(100);
    stack.push(99);
    stack.push(999);
    stack.push(0);
    stack.push(50);

    // Display
    stack.display();

    // Dequeue
    stack.pop();
    stack.pop();

    // Display
    stack.display();

    // Empty Check
    cout << "Empty Check: " << stack.isEmpty() << endl;

    // Size
    cout << "Size: " << stack.getSize() << endl;

    // Top
    cout << "Top: " << stack.top() << endl;

    // Bottom
    cout << "Bottom: " << stack.bottom() << endl;

    return 0;
}