// friend fuction call: private and protected members.

#include <iostream>
using namespace std;
class aaa
{
private:
    int x = 10;

protected:
    int good()
    {
        cout << "I am good." << endl;
        return 0;
    }
    friend int show(aaa obj);
};

int show(aaa obj)
{
    obj.good();
    cout << obj.x;
    return 0;
}

int main()
{
    aaa obj;
    show(obj);
    return 0;
}
