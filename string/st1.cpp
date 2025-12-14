#include <iostream>
using namespace std;

int main()
{
    char arr[20];
    cin >> arr;
    arr[4] = '\0';
    cout << arr;
}