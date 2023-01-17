#include <stdio.h>
#define SIZE 50

void print_array(char[], int);
int main(void)
{
    char name[SIZE];
    char temp;
    int index = 0;

    do
    {
        scanf("%c", &temp);
        if (temp != '~')
        {
            name[index] = temp;
            index++;
        }
    }while(!(temp == '~'));

    print_array(name, index);

    return 0;
}

void print_array(char arr[], int size)
{
    printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");   
}