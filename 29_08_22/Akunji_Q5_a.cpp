/*Q5. Write the code of copy constructor demonstrating the following:
    a)Shallow copy */

#include <iostream>
using namespace std;

class box
{
private:
    int length;
    int breadth;
    int height;

public:
    void set_dimensions(int length1, int breadth1, int height1)
    {
        length = length1;
        breadth = breadth1;
        height = height1;
    }
    void show_data()
    {
        cout << " \nLength = " << length
             << "\n Breadth = " << breadth
             << "\n Height = " << height
             << endl;
    }
};

int main()
{
    box A, C;
    int l, b, h;
    cout << "Enter the Length,Breadth and Height respectively :";
    cin >> l >> b >> h;
    A.set_dimensions(l, b, h);
    A.show_data();

    box B = A;
    B.show_data();

    C = A;
    C.show_data();

    return 0;
}
