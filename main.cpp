#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue queue;

    // Enqueue
    queue.enqueue(100);
    queue.enqueue(99);
    queue.enqueue(999);
    queue.enqueue(0);
    queue.enqueue(50);

    // Display
    queue.display();

    // Dequeue
    queue.dequeue();
    queue.dequeue();

    // Display
    queue.display();

    // Empty Check
    cout << "Empty Check: " << queue.isEmpty() << endl;

    // Size
    cout << "Size: " << queue.getSize() << endl;

    // Front
    cout << "Front: " << queue.front() << endl;

    // Rare
    cout << "Rare: " << queue.rare() << endl;

    return 0;
}