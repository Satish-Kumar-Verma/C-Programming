#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    int num;
    int num2;

    f = fopen("number.txt", "r");

    if (f == NULL)
    {
        printf("Error reading file...\n");
        exit(1);
    }


    fscanf(f, "username:%d", &num);
    fscanf(f, "\npassword:%d", &num2);

    printf("The number stored in the file is : %d\n", num);
    printf("The number stored in the file is : %d\n", num2);

    fclose(f);
    return 0;
}
