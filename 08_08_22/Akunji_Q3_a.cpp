#include<iostream>
using namespace std;
void display(char, int);
void display(char);
void display();
int main()
{
    char a;
    int n;
    cout << "Enter character & number: ";
    cin >> a >> n;
    display(a, n);
    display(a);
    display();
    return 0;
}
void display(char a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout << a <<" " ;
    }
    cout << endl;
}
void display(char a)
{
    int i;
    for(i = 0; i < 80; i++)
    {
        cout << a <<" ";
    }
    cout << endl;
}
void display()
{
    int i;
    for(i = 0;i < 80; i++)
    {
        cout << "* ";
    }
    cout << endl;
}