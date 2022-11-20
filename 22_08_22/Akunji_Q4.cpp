/*4. Create a class which stores name, roll number and total marks for a student. Input data for n
students. Find the average marks scored by n students, store it as a data member of the class and
display it using a function which may be called without object.*/

#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollno;

public:
    int n;
    int total[];
    void getDetails()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter details for student " << i + 1 << ": ";
            cout << "Name: ";
            cin >> name;
            cout << "Roll no: ";
            cin >> rollno;
            cout << "Total: ";
            cin >> total[i];
        }
    }
};
void getAverage(Student s, int n)
{
    s.getDetails();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + s.total[i];
    }
    double average = double(sum) / (double)n;
    cout << "\nAverage is " << average;
}
int main()
{
    Student s1;
    int n;
    getAverage(s1, n);
    cout << "enter the number of students";
    cin >> n;

    return 0;
}