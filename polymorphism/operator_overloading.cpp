// operator overloading for complex sum
#include <iostream>
using namespace std;
<<<<<<< HEAD
class Complex
=======
class complex
>>>>>>> e3d9ab70e0a2f670ec9f3e8d50f77b3081faedb3
{
    int real, imag;

public:
<<<<<<< HEAD
    Complex(int real, int imag)
=======
    complex(int real, int imag)
>>>>>>> e3d9ab70e0a2f670ec9f3e8d50f77b3081faedb3
    {
        // meaning of this : left = object (class me define) ka real, right = function ka real jo parameter pass hua
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
<<<<<<< HEAD
    Complex()
=======
    complex()
>>>>>>> e3d9ab70e0a2f670ec9f3e8d50f77b3081faedb3
    {
        real = 0;
        imag = 0;
    }
<<<<<<< HEAD
    Complex operator+(Complex &c)
    {
        Complex ans;              // for this we have create a default constuctor
=======
    complex operator+(complex &c)
    {
        complex ans;              // for this we have create a default constuctor
>>>>>>> e3d9ab70e0a2f670ec9f3e8d50f77b3081faedb3
        ans.real = real + c.real; // real = c1 ka real and c.real = c2 ka real
        ans.imag = imag + c.imag;
        return ans;
    }
};

int main()
{
<<<<<<< HEAD
    Complex c1(4, 3);
    Complex c2(7, 6);
    Complex c3 = c1 + c2; // means this : c1.operator+(c2)
    c3.display();
}
=======
    complex c1(4, 3);
    complex c2(7, 6);
    complex c3 = c1 + c2; // means this : c1.operator+(c2)
    c3.display();
}
>>>>>>> e3d9ab70e0a2f670ec9f3e8d50f77b3081faedb3
