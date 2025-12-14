// WAP to print factorial of given number.

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long long fact = 1;
    cout << "Enter a number:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of " << n << "=" << fact;

    return 0;
}