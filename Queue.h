#ifndef QUEUE_H
#define QUEUE_H

#include "LinkedList.h"

class Queue
{
    LinkedList list;

public:
    Queue()
    {
    }

    void enqueue(int value)
    {
        this->list.append(value);
    }

    void dequeue()
    {
        this->list.removeAt(0);
    }

    int front()
    {
        if (!this->isEmpty())
        {
            return this->list.getAt(0);
        }
        else
        {
            return -1;
        }
    }

    int rare()
    {
        if (!this->isEmpty())
        {
            return this->list.getAt(this->getSize() - 1);
        }
        else
        {
            return -1;
        }
    }

    bool isEmpty()
    {
        return this->list.isEmpty();
    }

    int getSize()
    {
        return this->list.getSize();
    }

    void display()
    {
        this->list.display();
    }
};

#endif