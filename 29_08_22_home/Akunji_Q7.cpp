//.Q.7.Sum of n elements using function concept.

#include <iostream>
using namespace std;

int sum(int num);

int main()
{
    int no;
    cout << "\n Enter the number till you want to add : ";
    cin >> no;

    cout << " Sum of the " << no << " numbers is : " << sum(no);
    return 0;
}
int sum(int num)
{

    int i, addition = 0;

    for (i = 1; i <= num; i++)
    {
        addition += i;
    }
    return addition;
}