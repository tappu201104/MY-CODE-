// WAP to print table of the given number.

#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 1;
    cout << "Enter a number:";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        sum = n * i;
        cout << n << "X" << i << "=" << sum << endl;
    }
    return 0;
}
