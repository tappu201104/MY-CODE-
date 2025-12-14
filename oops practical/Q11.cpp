// WAP for compile time polymorphism .

#include <iostream>
using namespace std;

class animal
{
public:
    // function with 1 int parameter
    int dog(int x)
    {
        cout << "dog has " << x << " legs" << endl;
        return 0;
    }

    // function with same name but 1 double parameter
    int dog(double x)
    {
        cout << "length of legs is : " << x << " inch" << endl;
        return 0;
    }

    // function with same name but 2 int parameter
    int dog(int x, int y)
    {
        cout << "Dog has " << x << " eyes and " << y << " tail" << endl;
        return 0;
    }
};

int main()
{
    animal obj;
    obj.dog(2);
    obj.dog(15.3);
    obj.dog(2, 1);
    return 0;
}