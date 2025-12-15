#include <iostream>
using namespace std;
class stack
{
    int *arr, size, top;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack overflow";
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "pushed " << arr[top] << endl;
        }
    }
};
int main()
{
    stack s(5);
    s.push(3);
    s.push(5);
    s.push(9);



    return 0;
}