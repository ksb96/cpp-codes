#include <iostream>

using namespace std;

// creating node
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

// creating linked list
class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead()
    {
        cout << "Head: " << head->value << endl;
    }

    void getTail()
    {
        cout << "Tail: " << tail->value << endl;
    }

    void getLength()
    {
        cout << "Length: " << length << endl;
    }
};

int main()
{
    // assigning value to the linked list(node)
    LinkedList *myLinkedList = new LinkedList(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    myLinkedList->printList();
}
