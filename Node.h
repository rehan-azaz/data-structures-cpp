#ifndef NODE_H
#define NODE_H

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    ~Node() {}

    int getData() const
    {
        return this->data;
    }

    Node *getNext() const
    {
        return this->next;
    }

    void setNext(Node *next)
    {
        this->next = next;
    }
};

#endif