#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

class Stack
{
    LinkedList list;

public:
    Stack()
    {
    }

    void push(int value)
    {
        this->list.prepend(value);
    }

    void pop()
    {
        this->list.removeAt(0);
    }

    int top()
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

    int bottom()
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
