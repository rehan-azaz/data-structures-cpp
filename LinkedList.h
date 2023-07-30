#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (this->head == nullptr)
        {
            this->head = newNode;
        }
        else
        {
            Node *current = this->head;
            while (current->getNext() != nullptr)
            {
                current = current->getNext();
            }
            current->setNext(newNode);
        }
    }

    void prepend(int value)
    {
        Node *newNode = new Node(value);

        Node *temp = this->head;

        this->head = newNode;

        this->head->setNext(temp);
    }

    void insertAfter(Node *node, int value)
    {
        if (this->head == nullptr || node == nullptr)
        {
            return;
        }

        Node *current = this->head;
        while (current != nullptr)
        {
            if (current->getData() == node->getData())
            {
                Node *temp = new Node(value);
                temp->setNext(current->getNext());
                current->setNext(temp);
                return;
            }
            current = current->getNext();
        }
    }

    int getSize()
    {
        int size = 0;

        Node *current = this->head;

        while (current != nullptr)
        {
            size++;
            current = current->getNext();
        }
        return size;
    }

    void reverse()
    {
        Node *prev = nullptr;
        Node *current = this->head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->getNext();
            current->setNext(prev);
            prev = current;
            current = next;
        }
        this->head = prev;
    }

    bool search(int value)
    {
        bool found = false;

        Node *current = this->head;

        while (current != nullptr)
        {
            if (current->getData() == value)
            {
                found = true;
            }
            current = current->getNext();
        }
        return found;
    }

    int getAt(int index)
    {

        if (index < 0 || head == nullptr)
        {
            return -1;
        }

        Node *current = this->head;
        int idx = 0;
        while (current != nullptr)
        {
            if (index == idx)
            {
                return current->getData();
            }
            current = current->getNext();
            idx++;
        }
        return -1;
    }

    bool isEmpty()
    {
        if (this->head == nullptr)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        Node *current = this->head;
        while (current != nullptr)
        {
            cout << current->getData() << " -> ";
            current = current->getNext();
        }
        cout << "null" << endl;
    }

    void remove(int value)
    {
        if (this->head == nullptr)
        {
            return;
        }

        if (this->head->getData() == value)
        {
            Node *temp = head;
            head = head->getNext();
            delete temp;
            return;
        }

        Node *current = this->head;
        while (current->getNext() != nullptr)
        {
            if (current->getNext()->getData() == value)
            {
                Node *temp = current->getNext();
                current->setNext(current->getNext()->getNext());
                delete temp;
                return;
            }
            current = current->getNext();
        }
    }

    void removeAt(int index)
    {

        if (index < 0 || head == nullptr)
        {
            return;
        }

        if (index == 0)
        {
            Node *temp = this->head;
            this->head = this->head->getNext();
            delete temp;
            return;
        }

        Node *current = this->head;
        int idx = 1;
        while (current->getNext() != nullptr)
        {
            if (index == idx)
            {
                Node *temp = current->getNext();
                current->setNext(current->getNext()->getNext());
                delete temp;
                return;
            }
            current = current->getNext();
            idx++;
        }
    }

    void clear()
    {
        Node *current = this->head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->getNext();
            delete temp;
        }
        this->head = nullptr;
    }

    ~LinkedList()
    {
        this->clear();
    }
};

#endif