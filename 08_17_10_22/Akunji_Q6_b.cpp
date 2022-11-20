/*Q6. WAP to overload the  following operator for class Distance which store the distance in feets & inches.
    b. add an int to an object.*/

#include <iostream>
using namespace std;

class min
{
public:
    int m;
    min(int k)
    {
        m = k;
    }
    void display()
    {
        cout << "Minute: " << m << endl;
    }
};
class hour : public min
{
public:
    int h;
   /* hour(class min x)
    {
        h = x.m / 60;
    }*/
    void diplay()
    {
        cout << "Hour: " << h << endl;
    }
};
int main()
{
    class min a(120);
    //class hour b(a);
    a.display();
    //b.display();

    return 0;
}