#include <iostream>
using namespace std;

class Student
{
public:
    char name[50];
    char college[50];
    char event[50];
    int score;

    void get_data()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter College Name: ";
        cin >> college;
        cout << "Enter name of event: ";
        cin >> event;
        cout << "Enter score in event: ";
        cin >> score;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nCollege Name: " << college;
        cout << "\nEvent Name: " << event;
        cout << "\nScore in Event: " << score;
    }
};

int main()
{
    int n, i;
    cout << "Enter no. of students participating: ";
    cin >> n;

    Student st[n];

    for (i = 0; i < n; i++)
        st[i].get_data();

    int max = st[0].score;
    int pos = 0;
    for (i = 0; i < n; i++)
    {
        if (st[i].score > max)
        {
            max = st[i].score;
            pos = i;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << "\n\nDetails of Student " << (i + 1) << " is: ";
        st[i].display();
    }

    cout << "\n\nWinner of the event is "
         << "Student " << (pos + 1) << ": \n";
    st[pos].display();
}