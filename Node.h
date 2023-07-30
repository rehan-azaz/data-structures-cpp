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

    int getData() const {
        return this->data;
    }

    Node* getNext() const {
        return this->next;
    }  

    void setNext(Node* next) {
        this->next = next;
    }
};