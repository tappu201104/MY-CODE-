// when same name's function of both base class in multiple inheritance and the call that funtion then
//   the fuction of base class by using scope resolution operator for specify: 

#include <iostream>
using namespace std;
class aaa
{
public:
     int show()
    {
        cout << "I am base1 class:" << endl;
        return 0;
    }
};
class bbb 
{
public:
    int show()
    {
        cout << "I am base2 class:";
        return 0;
    }
};
class ccc : public aaa, public bbb
{
public:
    int go()
    {
        cout << "I am derived class:";
        return 0;
    }
};
int main()
{
    ccc obj;
    obj.aaa::show();
    obj.bbb::show();
    return 0;
}
