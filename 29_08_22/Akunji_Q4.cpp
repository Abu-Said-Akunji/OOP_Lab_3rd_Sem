/*Q4. WAP to demonstrate the order of call of constructors and destructors for a class.*/

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Inside base class" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Inside sub class" << endl;
    }
};

int main()
{
    B obj;
    return 0;
}