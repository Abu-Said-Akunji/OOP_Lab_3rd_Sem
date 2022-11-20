/*1. WAP to print the largest private data member of three classes.
[The classes have no relation with each other].*/

#include <iostream>
using namespace std;

class LargestNumber
{
private:
  int number_1, number_2, number_3;

public:
  void largest(int n_1, int n_2, int n_3)
  {
    number_1 = n_1;
    number_2 = n_2;
    number_3 = n_3;

    if ((number_1 > number_2) && (number_1 > number_3))
    {
      cout << number_1 << " is greater than " << number_2 << " and " << number_3;
    }

    else if ((number_2 > number_1) && (number_2 > number_3))
    {
      cout << number_2 << " is greater than " << number_1 << " and " << number_3;
    }

    else
    {
      cout << number_3 << " is greater than " << number_1 << " and " << number_2;
    }
  }
};

int main()
{
  LargestNumber L;

  int n_1, n_2, n_3;

  cout << "\nEnter 1st Number: ";
  cin >> n_1;
  cout << "Enter 2nd Number: ";
  cin >> n_2;
  cout << "Enter 3rd Number: ";
  cin >> n_3;

  L.largest(n_1, n_2, n_3);

  return 0;
}
