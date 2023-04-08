#include <cstdlib>
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
        while (head->next != nullptr)
        {

            cout << head->value;
            head = head->next;
            if (head != nullptr)
            {
                cout << " -> ";
            }
        }
        cout << head->value << endl;
    }
}

void LinkedList::scrollBack()
{
    while (head->next != nullptr)
    {
        head = head->next;
    }

    while (head->prev != nullptr)
    {
        cout << head->value;
        if (head != nullptr)
        {
            cout << " <- ";
        }
        head = head->prev;
    }
    cout << head->value << endl;
}

void LinkedList::scrollForward()
{
    while (head->prev != nullptr)
    {
        head = head->prev;
    }
}

void LinkedList::setInformation()
{
}

void LinkedList::populate(int val = 1)
{
    for (int i = 0; i < val; i++)
    {
        addToFront((rand() % 30 + 1));
    }
}