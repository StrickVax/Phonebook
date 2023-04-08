#ifndef NODE_H
#define NODE_H

using namespace std;

struct Node
{
    int value;
    Node *next = nullptr;
    Node *prev = nullptr;
};

struct LinkedList
{
    Node *head;
    LinkedList();

    void addToFront(int);
    void addToBack();
    void insert();
    void information();
    void scrollBack();
    void scrollForward();
    void setInformation();
};

#endif