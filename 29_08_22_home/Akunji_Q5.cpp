//.Q.5.Input any array,extract the even numbers and odd number.

#include <iostream>
using namespace std;

int main()
{
    int ARR[10], OAR[10], EAR[10];
    int i, j = 0, k = 0, n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> ARR[i];
    }

    for (i = 0; i < n; i++)
    {
        if (ARR[i] % 2 == 0)
        {
            EAR[j] = ARR[i];
            j++;
        }
        else
        {
            OAR[k] = ARR[i];
            k++;
        }
    }

    cout << "The Odd elements are: ";
    for (i = 0; i < k; i++)
    {
        cout << OAR[i] << " ";
    }

    cout << "\nThe Even elements are: ";
    for (i = 0; i < j; i++)
    {
        cout << EAR[i]<<" ";
    }
}