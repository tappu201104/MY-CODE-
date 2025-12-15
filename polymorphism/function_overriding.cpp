// rutime polymorohism examole: funtion overriding.

#include <iostream>
using namespace std;
class base
{
public:
    int show()
    {
        cout << "I am base class:";
        return 0;
    }
};
class derived : public base
{
public:
    int show()                           //overrideds the fuction of parents class. 
    {
        cout << "I am derived class:";
        return 0;
    }
};
int main()
{
    base *ptr;
    derived obj;
    // ptr = &obj;                     //esme ye line kyu likhe hai kya ye likhna jaruri hai 
    ptr->show();
    return 0;
}