#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node A1(4);
    cout << "Data:" << A1.data << endl;
    return 0;
}