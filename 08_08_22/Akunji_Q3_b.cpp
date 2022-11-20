// Default Arguments

#include <iostream>
using namespace std;

void displaychar(char c, int n = 80)
{
    char b = c;
    for (int i = 0; i < n; i++)
    {
        cout << b;
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

    displaychar(a);
    cout << endl;
    displaychar(a, 5);
    cout << endl;
    displaystar();
    cout << endl;
}