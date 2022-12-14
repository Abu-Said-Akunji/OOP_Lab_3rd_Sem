/*
 Q2. Write a program using function template to find out the largest
 element in an array. Using this template, find the largest element in an
 integer and a float array.
*/

#include <iostream>
using namespace std;

template <class T>
class ARRAY
{
private:
    T *arr;
    int Size;

public:
    void Insert()
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        Size = n;
        arr = new T[n];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    };
    void LargestElem()
    {
        T largest = 0;
        for (int i = 0; i < Size; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        cout << "Largest element in the Array: " << largest << endl;
    };

    void Display()
    {
        if (Size == -1)
            cout << "Array is empty!" << endl;

        else
        {
            cout << "Elements are: ";
            for (int i = 0; i < Size; i++)
            {
                cout << arr[i] << " ";
            }
        }
    };
};

int main()
{
    int x;
    cout << "\nSelect the data type";
    cout << "\n\t1. Integer";
    cout << "\n\t2. Float\n";
    cin >> x;
    if (x == 1)
    {
        ARRAY<int> obj;
        int option;
        do
        {
            cout << "\n***MAIN MENU*";
            cout << "\n 1. Insert elements";
            cout << "\n 2. See largest element";
            cout << "\n 3. Display the elements";
            cout << "\n 4. EXIT";
            cout << "\n Enter your option: ";
            cin >> option;
            cout << "\n\n";

            switch (option)
            {
            case 1:
                obj.Insert();
                break;

            case 2:
                obj.LargestElem();
                break;

            case 3:
                obj.Display();
                break;
            }

        } while (option != 4);
    }
    else
    {
        ARRAY<float> obj;
        int option;
        do
        {
            cout << "\n***MAIN MENU*";
            cout << "\n 1. Insert elements";
            cout << "\n 2. See largest element";
            cout << "\n 3. Display the elements";
            cout << "\n 4. EXIT";
            cout << "\n Enter your option: ";
            cin >> option;
            cout << "\n\n";

            switch (option)
            {
            case 1:
                obj.Insert();
                break;

            case 2:
                obj.LargestElem();
                break;

            case 3:
                obj.Display();
                break;
            }

        } while (option != 4);
    }
    return 0;
}