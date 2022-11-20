// Q.1 WAP to create an array that can store max. 50 integers and display the contents of the array

#include <iostream>
using namespace std;

int main() 
{

  int numbers[50];
  for (int i = 0; i < 50; ++i) 
  {
      numbers[i] = i;
  }
  cout << "\nThe numbers are: ";

  for (int i = 0; i < 50; ++i) 
  {
    cout << numbers[i] << "  ";
  }

  return 0;
}