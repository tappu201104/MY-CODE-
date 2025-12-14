// virtual in different way 
#include <iostream>
using namespace std;
class aaa
{
public:
    virtual int show()
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
    ptr = new bbb(); // create a obj of class bbb in runtime (heap memory) 
    ptr->show();     // even call derived by using virtual keyword
    return 0;
}
