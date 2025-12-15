// why use virtual function

#include <iostream>
#include <vector>
using namespace std;
class animal
{
public:
     virtual int speak()
    {
        cout << "hu hu " << endl;
        return 0;
    }
};
class dog : public animal
{
public:
    int speak()
    {
        cout << "bho bho \n";
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
    a.push_back(new animal());
    a.push_back(new dog());
    a.push_back(new cat());

    for (int i = 0; i < a.size(); i++)
    {
        p = a[i];
        p->speak();
    }
}