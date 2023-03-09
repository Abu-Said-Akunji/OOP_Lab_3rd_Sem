// Default Arguments

#include <iostream>
using namespace std;

void displaychar(char c, int n =10)
{
    char b = c;
    for (int i = 0; i < n; i++)
    {
        cout << b<<"\n";
    }
}

void displaystar()
{
    
    for (int i = 0; i < 80; i++)
    {
        cout <<"*";
    }
}

int main()
{
    char a;
    cout << "Enter a character" << endl;
    cin >> a;

    displaychar(a,5);
    cout << endl;
    displaychar(a);
    cout << endl;
    displaystar();
    cout << endl;
}