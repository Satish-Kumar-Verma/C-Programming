#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    string roll_no;
    int age;
} student;

void print_info(student, int);
void sort_students(student [], int);

int main(void)
{

    int n;
    char ignore;
    printf("Enter the number of student : ");
    scanf("%d", &n);
    student students[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &ignore);
        students[i].name = get_string("Enter your name : ");
        students[i].roll_no = get_string("Enter your roll number : ");
        printf("Enter your age : ");
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < n; i++)
    {
        print_info(students[i], i);
        printf("\n");
    }

    printf("After sorting according with the age in ascending order : \n");
    sort_students(students, n);

    for (int i = 0; i < n; i++)
    {
        print_info(students[i], i);
        printf("\n");
    }


    return 0;
}

void sort_students(student s[], int size)
{
    student temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (s[i].age > s[j].age)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void print_info(student s, int n)
{
    printf("No. : %d\n", n + 1);
    printf("Name : %s\n", s.name);
    printf("Roll no : %s\n", s.roll_no);
    printf("Age : %d\n", s.age);
}