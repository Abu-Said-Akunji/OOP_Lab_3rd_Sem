// Q.13. WAP to replace all vowels from a string with its immediate consonant.

#include <iostream>
using namespace std;

int Vowel(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        return false;
    return true;
}
string replace_vowels(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (Vowel(s[i]))
        {
            s[i] = (char)(s[i] + 1);
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << replace_vowels(s);

    return 0;
}
