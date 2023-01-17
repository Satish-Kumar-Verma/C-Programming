#include <stdio.h>
#include <stdlib.h>



typedef struct student_info
{
    char name[20];
    int height;
}student;


int main(void)
{
    FILE *f = fopen("Students_info.bin", "rb");
    int n;

    printf("Enter the number of students : ");
    scanf("%d", &n);
    student student_;
    if (f == NULL)
    {
        printf("Error reading file...\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        fread(&student_, sizeof(student), 1, f);
        printf("Student %d\'s name : %s\n", i + 1, student_.name);
        printf("Student %d\'s height : %d\n", i + 1, student_.height);
    }

    fclose(f);
    return 0;
}