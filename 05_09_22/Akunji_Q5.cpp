/*Q.5. Create a class ‘shape’. Derive three classes from it: Circle, Triangle, and Rectangle. Include
the relevant data members and functions in all the classes. Find the area of each shape and
display it.*/

#include <iostream>
#include <conio.h>
using namespace std;
class shape
{
public:
    virtual void area() = 0;
};
class circle : public shape
{
    float r;

public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "Area of circle : " << (3.1416 * r * r) << endl;
    }
};
class rectangle : public shape
{
    int l, b;

public:
    void area()
    {
        cout << "\nEnter length of rectangle : ";
        cin >> l;
        cout << "Enter breadth of rectangle : ";
        cin >> b;
        cout << "Area of rectangle : " << l * b << endl;
    }
};
class triangle : public shape
{
    int h, b;
    float a;

public:
    void area()
    {
        cout << "\nEnter height of the Triangle : ";
        cin >> h;
        cout << "Enter breadth of the Triangle : ";
        cin >> b;
        a = 0.5 * h * b;
        cout << "Area of triangle : " << a;
    }
};
int main()
{
    circle c;
    c.area();
    rectangle r;
    r.area();
    triangle t;
    t.area();
    // getch();
    return (0);
}