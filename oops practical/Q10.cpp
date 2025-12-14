// WAp for compile time polymorphism.

#include <iostream>
using namespace std;
class Bird
{
public:
    int sound(int x)
    {
        cout << "I am a sparrow" << endl;
        return 0;
    }
    int sound(double y)
    {
        cout << "I am a parrot" << endl;
        return 0;
    }
    int sound(int x, int y)
    {
        cout << "I am a eagle" << endl;
        return 0;
    }
};
int main()
{
    Bird obj;
    obj.sound(1);
    obj.sound(2.5);
    obj.sound(1, 2);
    return 0;
}