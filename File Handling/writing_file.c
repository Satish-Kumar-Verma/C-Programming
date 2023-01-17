#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    int num;

    f = fopen("number.txt", "w");

    if (f == NULL)
    {
        printf("Error opening file... \n");
        exit(1);
    }

    printf("Enter the number : ");
    scanf("%d", &num);

    fprintf(f, "The number is : %d", num);

    fclose(f);

    return 0;
}