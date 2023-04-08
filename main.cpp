#include <iostream>
#include "node.cpp"

using namespace std;

int main()
{
    LinkedList LL;

    LL.addToFront(4);
    LL.addToFront(5);
    LL.addToFront(3);
    LL.information();
    return 0;
}