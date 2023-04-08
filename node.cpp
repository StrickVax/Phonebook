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
    if (head != nullptr)
    {
        head->prev = temp;
    }
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

            cout << head->value;
            head = head->next;
            if (head != nullptr)
            {
                cout << " -> ";
            }
        }
    }
}

void LinkedList::scrollBack()
{
    while (head->next != nullptr)
    {
        head = head->next;
    }

    while (head != nullptr)
    {
        cout << head->value;
        head = head->prev;
        if (head != nullptr)
        {
            cout << " <- ";
        }
    }
}

void LinkedList::setInformation()
{
}