#include <iostream>
#include "node.cpp"

using namespace std;

int main()
{
    LinkedList LL;

    LL.populate(7);
    LL.information();
    LL.scrollBack();
    LL.scrollForward();
    return 0;
}