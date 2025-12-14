// operator overloading for complex sum
#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex(int real, int imag)
    {
        // meaning of this : left = object (class me define) ka real, right = function ka real jo parameter pass hua
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex operator+(complex &c)
    {
        complex ans;              // for this we have create a default constuctor
        ans.real = real + c.real; // real = c1 ka real and c.real = c2 ka real
        ans.imag = imag + c.imag;
        return ans;
    }
};

int main()
{
    complex c1(4, 3);
    complex c2(7, 6);
    complex c3 = c1 + c2; // means this : c1.operator+(c2)
    c3.display();
}
