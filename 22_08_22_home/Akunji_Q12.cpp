// Q.12. WAP to print the numbers which are divisible by 7 and 13 within a range.

#include <iostream>
using namespace std;

int main()
{
    int i, ll, hl;
    cout << "Enter the lower limit : ";
    cin >> ll;
    cout << "Enter the higher limit : ";
    cin >> hl;
    cout << "The Numbers are : ";
    for (i = ll; i < hl + 1; i++)
    {
        if (i % 7 == 0 && i % 13 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}