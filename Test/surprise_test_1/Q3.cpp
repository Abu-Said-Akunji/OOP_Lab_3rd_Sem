/*
 Q3. Create a template class arrayay that reads and prints the elements for which memory is
 allocated dynamically. Include the member functions in the class to perform inserting,
 deleting, searching and sorting on the arrayay. Call the functions for a float arrayay.
*/
#include <iostream>
using namespace std;

template <class T>
class ARRAY
{
private:
    T *array;
    int Size = -1;

public:
    void Insert()
    {
        int size;
        cout << "Number of elements: ";
        cin >> size;
        Size = size;
        array = new T[size];
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++)
            cin >> array[i];
    };
    void Search()
    {
        int val, X = -1;
        cout << "Enter element you want to search: ";
        cin >> val;
        for (int i = 0; i < Size; i++)
        {
            if (array[i] == val)
            {
                X = i;
                break;
            }
        }
        if (X == -1)
            cout << "Element not found!" << endl;
        else
            cout << "Your Searched item is at position: " << X + 1 << endl;
    };
    void Delete()
    {
        int val, X = -1;
        cout << "Enter element you want to delete: ";
        cin >> val;
        for (int i = 0; i < Size; i++)
        {
            if (array[i] == val)
            {
                X = i;
                break;
            }
        }
        if (X == -1)
            cout << "Element not found!" << endl;

        else
        {
            for (int i = 0; i < Size - 1; i++)
            {
                array[X] = array[X + 1];
                X++;
            }
            Size--;
            cout << "Element deleted!" << endl;
        }
    };
    void Display()
    {
        if (Size == -1)
            cout << "array is empty!" << endl;

        else
        {
            cout << "Elements are: ";
            for (int i = 0; i < Size; i++)
            {
                cout << array[i] << " ";
            }
        }
    };
};

int main()
{
    ARRAY<int> obj1;
    int option;
    do
    {
        cout << "\n***MAIN MENU*";
        cout << "\n 1. Insert elements";
        cout << "\n 2. Delete an element";
        cout << "\n 3. Search an element";
        cout << "\n 4. Display the elements";
        cout << "\n 5. EXIT";
        cout << "\n Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            obj1.Insert();
            break;

        case 2:
            obj1.Delete();
            break;

        case 3:
            obj1.Search();
            break;

        case 4:
            obj1.Display();
            break;
        }

    } while (option != 5);
    return 0;
}