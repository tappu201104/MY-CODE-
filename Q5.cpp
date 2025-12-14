// WAP to find greater number between two number.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    if (a > b)
    {
        cout << "greater number is:" << a;
    }
    else if (a < b)
    {
        cout << "greater number is:" << b;
    }
    else
        cout << "both are equal";

    return 0;
}