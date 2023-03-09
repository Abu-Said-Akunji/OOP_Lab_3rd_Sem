#include <iostream>
#include <cstdlib>
using namespace std;

float circle_area(float r)
{
    return (3.14 * r * r);
}
float triangle_area(float b, float h)
{
    return (0.5 * b * h);
}
float rectangular_area(float l, float b)
{
    return (l * b);
}
int main()
{
    float b, h, r, l;
    int ch;

    do
    {
        cout << "\n\n *****Menu***** \n";
        cout << "\n 1. Area of Circle";
        cout << "\n 2. Area of Triangle";
        cout << "\n 3. Area of Rectangle";
        cout << "\n 4. Exit";
        cout << "\n\n Enter Your Choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\n Enter the Radius of Circle : ";
            cin >> r;
            cout << "\n Area of Circle : " << circle_area(r);
            break;
        }
        case 2:
        {
            cout << "\n Enter the Base & Height of Triangle : ";
            cin >> b >> h;
            cout << "\n Area of Triangle : " << triangle_area(b, h);
            break;
        }
        case 3:
        {
            cout << "\n Enter the Length & Bredth of Rectangle : ";
            cin >> l >> b;
            cout << "\n Area of Rectangle : " << rectangular_area(l, b);
            break;
        }
        case 4:
            exit(0);
        default:
            cout << "n Invalid Choice... ";
        }
    } while (ch != 4);
    return 0;
}