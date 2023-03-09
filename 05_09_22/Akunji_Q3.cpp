/*Q.3. Extend the program (2) to derive a class ‘result’ from class ‘test’, which includes member
function to calculate total marks and percentage of a student. Input the data for a student and
display its total marks and percentage.*/

#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int age;
    int roll;

public:
    void get_Info(void);
    void display_Info(void);
};

void student::get_Info(void)
{
    cout << "\nEnter student's basic information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "roll : ";
    cin >> roll;
}

void student::display_Info(void)
{
    cout << " Name: " << name << "\n Age: " << age << "\n roll : " << roll;
}

class test : public student
{
public:
    int sub1, sub2, sub3, sub4, sub5;
    void get_test_result(void);
    void put_test_result(void);
};
void test::get_test_result(void)
{
    cout << "\nEnter the marks for the five subject respectively : ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
}

void test::put_test_result(void)
{
    cout << "\nThe marks of five subjects are : " << endl;
    cout << " Subject 1: " << sub1 << " Subject 2: " << sub2 << "\n Subject 3: " << sub3 << " Subject 4: " << sub4 << "\n Subject 5: " << sub5;
}
class result : public test
{
private:
    int total_mark;
    int percent;

public:
    void get_result(void);
};
void result ::get_result(void)
{
    total_mark = sub1 + sub2 + sub3 + sub3 + sub4 + sub5;
    cout << "\nThe total mark is= " << total_mark;
    percent = (total_mark * 100) / 500;
    cout << "\nThe Percentage is= " << percent << "% ";
}

int main()
{
    test std;
    result std2;
    std.get_Info();
    std2.get_test_result();
    std.display_Info();
    std2.put_test_result();
    std2.get_result();

    return 0;
}
