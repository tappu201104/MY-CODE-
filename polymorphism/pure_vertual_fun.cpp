// pure virtual function
#include <iostream>
#include <vector>
using namespace std;
class animal
{
public:
    virtual int speak() = 0; // abstract class : cannot create obj of pure virtual fun
};
class dog : public animal
{
public:
    int speak()
    {
        cout << "bark \n";
        return 0;
    }
};
class cat : public animal
{
    int speak()
    {
        cout << "meou meou " << endl;
        return 0;
    }
};

int main()
{
    animal *p;
    vector<animal *> a;
    a.push_back(new dog());
    a.push_back(new cat());
    a.push_back(new dog());
    a.push_back(new cat());

    for (int i = 0; i < a.size(); i++)
    {
        p = a[i];
        p->speak();
    }
}
