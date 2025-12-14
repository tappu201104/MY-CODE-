#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Some generic animal sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
};
int main()

{
    Animal *animal;
    Dog dog;
    animal = &dog;
    animal->sound();
    return 0;
}
