#include <iostream>
using namespace std;

class num
{
    int up1, up2, down1, down2;
    float x, y;

public:
    void getdetails()
    {
        cout << "Enter the fractional number";
        cin >> up1 >> down1;
        cout << "the first number is " << up1 << "/" << down1;
        cout << "Enter the second fractional number";
        cin >> up2 >> down2;
        cout << "The second number is " << up2 << "/" << down2;

        x = up1 / down1;
        y = up2 / down2;
    }
     num operator==( float x, float y)
    {
        if (x == y)
            cout << "the numbers are equal";
        else
            cout << "the numbers are not equal";
    }
     num operator!=(float x, float y)
    {
        if (x > y)
            cout << "the larger number is " << x;
        else
            cout << "the larger number is " << y;
    }
};
int main()
{
    num n;
    n.getdetails;
    n.operator==;
    n.operator!=;
    return 0;
}