/*Q3. Write a C++ program to capitalize the first letter of each
 word of a given string. Words mustbe separated by only one space.*/

#include <iostream>
#include <string>

using namespace std;

string Capitalizing_letter(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main() 
{
	string s;
    cout << "\nEnter the string: ";
    getline(cin, s);
    cout << "Restructured string: "	<< Capitalizing_letter(s);
	return 0;
}