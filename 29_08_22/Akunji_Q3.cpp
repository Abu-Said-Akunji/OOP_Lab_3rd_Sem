/*Q3. Create a class which stores a sting and its length as data members. Include all the constructors. Include
a member function to join two strings and display the concatenated string.*/

#include <iostream>
#include <string.h>
using namespace std;

class AddString
{
public:
    char s1[25], s2[25];

    AddString(char str1[], char str2[])
    {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
    void operator+()
    {
        cout << "\nConcatenated string is : " << strcat(s1, s2);
    }
};
int main()
{
    char str1[] = "\n\tName : ";
    char str2[] = "Abu Said Akunji";

    AddString a1(str1, str2);
    +a1;
    return 0;
}