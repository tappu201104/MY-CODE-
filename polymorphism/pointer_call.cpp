// when same name's function of base and derived class the call that funtion with pointer then the fuction of base is output:

#include <iostream>
using namespace std;
class aaa
{
public:
    int show()
    {
        cout << "I am base class:" << endl;
        return 0;
    }
};
class bbb : public aaa
{
public:
    int show()
    {
        cout << "I am derived class:";
        return 0;
    }
};
int main()
{
    aaa *ptr;
    bbb obj;
    // ptr = &obj;
    ptr->show();
    obj.show();
    return 0;
}
