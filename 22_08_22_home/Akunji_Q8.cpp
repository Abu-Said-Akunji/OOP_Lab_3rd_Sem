// Q.8. WAP to find out the sum of the elements stored in a matrix.

#include <iostream>
using namespace std;
int main()
{
    int n, arr[50], i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}