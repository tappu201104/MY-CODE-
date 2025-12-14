// WAP to print simple interest.

#include <iostream>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "Enter the principal:";
    cin >> p;
    cout << "Enter the Rate:";
    cin >> r;
    cout << "Enter the Time:";
    cin >> t;
    si = p * r * t / 100;
    cout << "Simple Interest:" << si;
    return 0;
}
