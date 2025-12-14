// when same name's function of base and derived class the call that funtion with pointer then
//   the fuction of derived class by using virtual fuction is output:   exampal : runtime polymorphis

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
    int go (){
        cout << "ok";
        return 0;
    }
};
int main()
{
    aaa *ptr;
    bbb obj;
    ptr = &obj;      // pointer points to derived object
    ptr->show();     // now derived class function will run
    // ptr->go();     // this is not possible beacuse class aaa have not access of go. 
    return 0;
}
