/*Q2.Create a class which is complex numbers.Add two digit & display the resultant object.Overloadd ++ operator of the class(pre & post iner)*/

#include <iostream>
using namespace std;

class complex
{
private:
    int real, im;

public:
    complex(int r, int c)
    {
        real = r;
        im = c;
    }
    void show()
    {
        cout << " " << real << " + " << im << "i" << endl;
    }
    complex operator+(complex &obj)
    {
        real += obj.real;
        im += obj.im;
    }
    complex operator++()
    {
        real++;
        im++;
    }
    complex &operator++(int)
    {
        real++;
        im++;
    }
};

int main()
{
    complex a(10, 4), b(20, 34);
    a.show();
    b.show();
    a + b;
    a.show();
    ++b;
    b.show();
    b++;
    b.show();

    return 0;
}