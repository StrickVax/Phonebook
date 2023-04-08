#include "node.h"

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::addToFront(int val)
{
        Node *temp = new Node;
        temp->value = val;
        temp->next = head;
        head = temp;
}

void LinkedList::addToBack()
{
}

void LinkedList::insert()
{
}

void LinkedList::information()
{
    if (head == nullptr)
    {
        cout << "List is empty";
    }

    else
    {
        while (head != nullptr)
        {
            cout << head->value << " -> ";
            head = head->next;
        }
    }
}

void LinkedList::setInformation()
{
}