#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* string;

int main(void)
{
    string name = (char*) malloc(20 * sizeof(char));
    int marks;
    int no_of_students;
    FILE *f = fopen("Students_data.txt", "w");
    char ignore;
    if (f == NULL)
    {
        printf("Error creating file...\n");
        exit(1);
    }

    printf("Enter the number of students : ");
    scanf("%d", &no_of_students);

    for (int i = 0; i < no_of_students; i++)
    {
        scanf("%c", &ignore);
        printf("Enter student %d\'s name : ", i + 1);
        scanf("%[^\n]%*c", name);

        printf("Enter the marks : ");
        scanf("%d", &marks);

        fprintf(f,"Name : %s\n", name);
        fprintf(f, "Marks : %d\n", marks);
    }
    free(name);

    fclose(f);
    return 0;
}