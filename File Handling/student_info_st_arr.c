#include <stdio.h>
#include <stdlib.h>


typedef struct student_info
{
    char name[20];
    int height;
}student;


int main(void)
{
    int n;
    char temp;
    FILE *f = fopen("Students_info.bin", "wb");
    if (f == NULL)
    {
        printf("Error creating file...\n");
        exit(1);
    }
    printf("Enter the number of students : ");
    scanf("%d", &n);
    student student_;

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &temp);
        printf("Enter the student %d\'s name : ", i + 1);
        scanf("%[^\n]%*c", student_.name);
        printf("Enter the height : ");
        scanf("%d", &student_.height);
        printf("%s\t%d\n", student_.name, student_.height);
        fwrite(&student_, sizeof(student), 1, f);
    }

    fclose(f);
    
    return 0;
}