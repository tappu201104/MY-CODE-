#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b; // Add integers
    }
    float add(float x, float y)
    {
        return x + y; // Add Decimals
    }
};
int main()
{
    Calculator calc;
    cout << "Integer add : " << calc.add(3, 5) << endl;
    cout << "Float add : " << calc.add(3.9f, 5.7f) << endl;
    return 0;
}
