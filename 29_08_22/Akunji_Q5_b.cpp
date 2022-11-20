/*Q5. Write the code of copy constructor demonstrating the following:
    b)Deep copy  */

#include <iostream>
using namespace std;

class box
{
private:
    int length;
    int *breadth;
    int height;

public:
    box()
    {
        breadth = new int;
    }
    void set_dimension(int l, int b, int h)
    {
        length = l;
        *breadth = b;
        height = h;
    }
    void show_data()
    {
        cout << " \nLength = " << length
             << "\n Breadth = " << *breadth
             << "\n Height = " << height
             << endl;
    }
    box(box &sample)
    {
        length = sample.length;
        breadth = new int;
        *breadth = *(sample.breadth);
        height = sample.height;
    }
    ~box()
    {
        delete breadth;
    }
};
int main()
{
    box first;
    int l, b, h;
    cout << "Enter the Length,Breadth and Height respectively :";
    cin >> l >> b >> h;
    first.set_dimension(l, b, h);
    first.show_data();

    box second = first;
    second.show_data();

    return 0;
}
