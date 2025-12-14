// compile time poltymophism exampal : fuction overloading 

#include <iostream>
using namespace std;
class aaa
{
    public:
     int show()
{
    cout << "I am show of first function:"<<endl;
    return 0;
}
int show (int a , int b){
    int sum = a + b;
    cout << "sum :" << sum << endl;
    return 0;
}
};
int main(){
    aaa obj;
    obj.show();
    obj.show(10 , 30);
    return 0;
}