#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* string;

int main(void)
{
    string name = (char*) malloc(20 * sizeof(char));
    int marks;
    FILE *f = fopen("Students_data.txt", "r");
    char ignore;
    if (f == NULL)
    {
        printf("Error reading file...\n");
        exit(1);
    }

    while (!feof(f))
    {
        fscanf(f, "Name : %[^\n]%*c", name);
        fscanf(f, "Marks : %d\n", &marks);
        printf("Name : %s\n", name);
        printf("Marks : %d\n", marks);
    }
    
    free(name);
    fclose(f);
    return 0;
}