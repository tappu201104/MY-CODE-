// WAP to multiple inheritance.

#include <iostream>
using namespace std;
class AIML
{
public:
    AIML()
    {
        cout << " This is a class aiml" << endl;
    }
};
class AIDS
{
public:
    AIDS()
    {
        cout << "This is a class aids" << endl;
    }
};
class CYBER : public AIML, public AIDS
{

public:
    CYBER()
    {
        cout << "This is a class CYBER" << endl;
    }
};
int main()
{
    CYBER obj;
    return 0;
}