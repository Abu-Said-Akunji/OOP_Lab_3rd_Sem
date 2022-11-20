/*Q.2. Write a C++ program to swap two numbers using the following:
a. Call by value */

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout<<"\nEnter the first number a = ";
   cin>>a;
   cout<<"\nEnter the Second number b = ";
   cin>>b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}