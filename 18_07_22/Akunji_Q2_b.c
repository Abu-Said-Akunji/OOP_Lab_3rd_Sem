/*
Q2. WAP to input name, roll number, and marks in 5 subjects for n number of students. Write
functions to:-
b. Display details of a student with a given roll number.
*/
#include<stdio.h>
#include<string.h>

struct student
{
    char name[30];
    int roll;
    int marks[5];
};

void show_details_with_roll(struct student stu[], int roll, int number_of_students)
{
    int n = number_of_students;
    for(int i = 0; i < n; i++)
    {
        if(roll == stu[i].roll)
        {
            printf("Name\t: %s\nRoll\t: %d\nMarks\t:\n", stu[i].name, stu[i].roll);
            for(int v = 0; v < 5; v++)
            {
                printf("\t  Subject-%d: %d\n", v+1, stu[i].marks[v]);
            }
        }
    }
}

int main()
{
    int n;
    printf("\nEnter the number of Student: ");
    scanf("%d", &n);
    int asked_roll;
    struct student stu[n];
    for(int k = 0; k < n; k++)
    {
        printf("\nEnter Student-%d's name: ", k+1);
        scanf("%s", &stu[k].name);
        printf("Enter Student%d's Roll: ", k+1);
        scanf("%d", &stu[k].roll);
        for(int i = 0; i < 5; i++)
        {
            printf("Enter Subject-%d's Mark of Student-%d: ", i+1, k+1);
            scanf("%d", &stu[k].marks[i]);
        }
    }
    printf("\n\nEnter Student's roll of you want to see detals: ");
    scanf("%d", &asked_roll);
    printf("\n");
    show_details_with_roll(stu, asked_roll, n);
    return 0;
}